#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002ED7C8
// Address: 0x2ed7c8 - 0x2eda20
void sub_002ED7C8_0x2ed7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED7C8_0x2ed7c8");
#endif

    switch (ctx->pc) {
        case 0x2ed860u: goto label_2ed860;
        case 0x2ed9c4u: goto label_2ed9c4;
        case 0x2ed9f0u: goto label_2ed9f0;
        case 0x2eda0cu: goto label_2eda0c;
        default: break;
    }

    ctx->pc = 0x2ed7c8u;

    // 0x2ed7c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ed7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ed7cc: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2ed7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x2ed7d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ed7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ed7d4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ed7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ed7d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ed7d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed7dc: 0x8e0411c0  lw          $a0, 0x11C0($s0)
    ctx->pc = 0x2ed7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2ed7e0: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2ed7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ed7e4: 0x10430089  beq         $v0, $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x2ED7E4u;
    {
        const bool branch_taken_0x2ed7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2ED7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED7E4u;
        // 0x2ed7e8: 0x30828000  andi        $v0, $a0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed7e4) {
            ctx->pc = 0x2EDA0Cu;
            goto label_2eda0c;
        }
    }
    ctx->pc = 0x2ED7ECu;
    // 0x2ed7ec: 0x54400088  bnel        $v0, $zero, . + 4 + (0x88 << 2)
    ctx->pc = 0x2ED7ECu;
    {
        const bool branch_taken_0x2ed7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed7ec) {
            ctx->pc = 0x2ED7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED7ECu;
            // 0x2ed7f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDA10u;
            goto label_2eda10;
        }
    }
    ctx->pc = 0x2ED7F4u;
    // 0x2ed7f4: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x2ed7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2ed7f8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2ed7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed7fc: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x2ed7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2ed800: 0x2462ffcf  addiu       $v0, $v1, -0x31
    ctx->pc = 0x2ed800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967247));
    // 0x2ed804: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x2ed804u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2ed808: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2ED808u;
    {
        const bool branch_taken_0x2ed808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED808u;
        // 0x2ed80c: 0x24020036  addiu       $v0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed808) {
            ctx->pc = 0x2ED91Cu;
            goto label_2ed91c;
        }
    }
    ctx->pc = 0x2ED810u;
    // 0x2ed810: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2ED810u;
    {
        const bool branch_taken_0x2ed810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ED814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED810u;
        // 0x2ed814: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed810) {
            ctx->pc = 0x2ED83Cu;
            goto label_2ed83c;
        }
    }
    ctx->pc = 0x2ED818u;
    // 0x2ed818: 0x8ca300d8  lw          $v1, 0xD8($a1)
    ctx->pc = 0x2ed818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 216)));
    // 0x2ed81c: 0x2462f858  addiu       $v0, $v1, -0x7A8
    ctx->pc = 0x2ed81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965336));
    // 0x2ed820: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2ed820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ed824: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED824u;
    {
        const bool branch_taken_0x2ed824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed824) {
            ctx->pc = 0x2ED828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED824u;
            // 0x2ed828: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED83Cu;
            goto label_2ed83c;
        }
    }
    ctx->pc = 0x2ED82Cu;
    // 0x2ed82c: 0x2462f852  addiu       $v0, $v1, -0x7AE
    ctx->pc = 0x2ed82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965330));
    // 0x2ed830: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2ed830u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ed834: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2ED834u;
    {
        const bool branch_taken_0x2ed834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed834) {
            ctx->pc = 0x2ED838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED834u;
            // 0x2ed838: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED83Cu;
            goto label_2ed83c;
        }
    }
    ctx->pc = 0x2ED83Cu;
label_2ed83c:
    // 0x2ed83c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2ED83Cu;
    {
        const bool branch_taken_0x2ed83c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED83Cu;
        // 0x2ed840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed83c) {
            ctx->pc = 0x2ED868u;
            goto label_2ed868;
        }
    }
    ctx->pc = 0x2ED844u;
    // 0x2ed844: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x2ed844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x2ed848: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ed848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ed84c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2ed84cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ed850: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ed850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed854: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2ed854u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2ed858: 0xc0c10f8  jal         func_3043E0
    ctx->pc = 0x2ED858u;
    SET_GPR_U32(ctx, 31, 0x2ED860u);
    ctx->pc = 0x2ED85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED858u;
    // 0x2ed85c: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3043E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3043E0u, 0x2ED858u, 0x2ED860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED860u;
label_2ed860:
    // 0x2ed860: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x2ED860u;
    {
        const bool branch_taken_0x2ed860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED860u;
        // 0x2ed864: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed860) {
            ctx->pc = 0x2ED9F4u;
            goto label_2ed9f4;
        }
    }
    ctx->pc = 0x2ED868u;
label_2ed868:
    // 0x2ed868: 0x8ca30150  lw          $v1, 0x150($a1)
    ctx->pc = 0x2ed868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x2ed86c: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x2ed86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2ed870: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2ED870u;
    {
        const bool branch_taken_0x2ed870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ED874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED870u;
        // 0x2ed874: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed870) {
            ctx->pc = 0x2ED89Cu;
            goto label_2ed89c;
        }
    }
    ctx->pc = 0x2ED878u;
    // 0x2ed878: 0x8ca300d8  lw          $v1, 0xD8($a1)
    ctx->pc = 0x2ed878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 216)));
    // 0x2ed87c: 0x2462f855  addiu       $v0, $v1, -0x7AB
    ctx->pc = 0x2ed87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965333));
    // 0x2ed880: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2ed880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ed884: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED884u;
    {
        const bool branch_taken_0x2ed884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed884) {
            ctx->pc = 0x2ED888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED884u;
            // 0x2ed888: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED89Cu;
            goto label_2ed89c;
        }
    }
    ctx->pc = 0x2ED88Cu;
    // 0x2ed88c: 0x2462f84f  addiu       $v0, $v1, -0x7B1
    ctx->pc = 0x2ed88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965327));
    // 0x2ed890: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2ed890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ed894: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2ED894u;
    {
        const bool branch_taken_0x2ed894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed894) {
            ctx->pc = 0x2ED898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED894u;
            // 0x2ed898: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED89Cu;
            goto label_2ed89c;
        }
    }
    ctx->pc = 0x2ED89Cu;
label_2ed89c:
    // 0x2ed89c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ED89Cu;
    {
        const bool branch_taken_0x2ed89c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED89Cu;
        // 0x2ed8a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed89c) {
            ctx->pc = 0x2ED8C0u;
            goto label_2ed8c0;
        }
    }
    ctx->pc = 0x2ED8A4u;
    // 0x2ed8a4: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x2ed8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x2ed8a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ed8a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ed8ac: 0x3c01c316  lui         $at, 0xC316
    ctx->pc = 0x2ed8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49942 << 16));
    // 0x2ed8b0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2ed8b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ed8b4: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x2ed8b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ed8b8: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2ED8B8u;
    {
        const bool branch_taken_0x2ed8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED8B8u;
        // 0x2ed8bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed8b8) {
            ctx->pc = 0x2ED9BCu;
            goto label_2ed9bc;
        }
    }
    ctx->pc = 0x2ED8C0u;
label_2ed8c0:
    // 0x2ed8c0: 0x8ca20150  lw          $v0, 0x150($a1)
    ctx->pc = 0x2ed8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x2ed8c4: 0x240407a1  addiu       $a0, $zero, 0x7A1
    ctx->pc = 0x2ed8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1953));
    // 0x2ed8c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ed8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ed8cc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2ed8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ed8d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ed8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ed8d4: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ED8D4u;
    {
        const bool branch_taken_0x2ed8d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2ED8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED8D4u;
        // 0x2ed8d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed8d4) {
            ctx->pc = 0x2ED8FCu;
            goto label_2ed8fc;
        }
    }
    ctx->pc = 0x2ED8DCu;
    // 0x2ed8dc: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x2ed8dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x2ed8e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ed8e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ed8e4: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2ed8e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2ed8e8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2ed8e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ed8ec: 0x3c014387  lui         $at, 0x4387
    ctx->pc = 0x2ed8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17287 << 16));
    // 0x2ed8f0: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x2ed8f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ed8f4: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2ED8F4u;
    {
        const bool branch_taken_0x2ed8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED8F4u;
        // 0x2ed8f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed8f4) {
            ctx->pc = 0x2ED9BCu;
            goto label_2ed9bc;
        }
    }
    ctx->pc = 0x2ED8FCu;
label_2ed8fc:
    // 0x2ed8fc: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x2ed8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x2ed900: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ed900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ed904: 0x3c01c2b4  lui         $at, 0xC2B4
    ctx->pc = 0x2ed904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49844 << 16));
    // 0x2ed908: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2ed908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ed90c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2ed90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2ed910: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x2ed910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ed914: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2ED914u;
    {
        const bool branch_taken_0x2ed914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED914u;
        // 0x2ed918: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed914) {
            ctx->pc = 0x2ED9BCu;
            goto label_2ed9bc;
        }
    }
    ctx->pc = 0x2ED91Cu;
label_2ed91c:
    // 0x2ed91c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2ed91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2ed920: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ED920u;
    {
        const bool branch_taken_0x2ed920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ED924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED920u;
        // 0x2ed924: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed920) {
            ctx->pc = 0x2ED944u;
            goto label_2ed944;
        }
    }
    ctx->pc = 0x2ED928u;
    // 0x2ed928: 0x8ca3003c  lw          $v1, 0x3C($a1)
    ctx->pc = 0x2ed928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x2ed92c: 0x24020450  addiu       $v0, $zero, 0x450
    ctx->pc = 0x2ed92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1104));
    // 0x2ed930: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED930u;
    {
        const bool branch_taken_0x2ed930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ED934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED930u;
        // 0x2ed934: 0x24020452  addiu       $v0, $zero, 0x452 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed930) {
            ctx->pc = 0x2ED940u;
            goto label_2ed940;
        }
    }
    ctx->pc = 0x2ED938u;
    // 0x2ed938: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2ED938u;
    {
        const bool branch_taken_0x2ed938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ed938) {
            ctx->pc = 0x2ED944u;
            goto label_2ed944;
        }
    }
    ctx->pc = 0x2ED940u;
label_2ed940:
    // 0x2ed940: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ed940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ed944:
    // 0x2ed944: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ED944u;
    {
        const bool branch_taken_0x2ed944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED944u;
        // 0x2ed948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed944) {
            ctx->pc = 0x2ED96Cu;
            goto label_2ed96c;
        }
    }
    ctx->pc = 0x2ED94Cu;
    // 0x2ed94c: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x2ed94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x2ed950: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ed950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ed954: 0x3c01c234  lui         $at, 0xC234
    ctx->pc = 0x2ed954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49716 << 16));
    // 0x2ed958: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2ed958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ed95c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2ed95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2ed960: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x2ed960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ed964: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2ED964u;
    {
        const bool branch_taken_0x2ed964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED964u;
        // 0x2ed968: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed964) {
            ctx->pc = 0x2ED9BCu;
            goto label_2ed9bc;
        }
    }
    ctx->pc = 0x2ED96Cu;
label_2ed96c:
    // 0x2ed96c: 0x8ca30150  lw          $v1, 0x150($a1)
    ctx->pc = 0x2ed96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x2ed970: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2ed970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2ed974: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ED974u;
    {
        const bool branch_taken_0x2ed974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ED978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED974u;
        // 0x2ed978: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed974) {
            ctx->pc = 0x2ED998u;
            goto label_2ed998;
        }
    }
    ctx->pc = 0x2ED97Cu;
    // 0x2ed97c: 0x8ca3003c  lw          $v1, 0x3C($a1)
    ctx->pc = 0x2ed97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x2ed980: 0x24020451  addiu       $v0, $zero, 0x451
    ctx->pc = 0x2ed980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1105));
    // 0x2ed984: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED984u;
    {
        const bool branch_taken_0x2ed984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ED988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED984u;
        // 0x2ed988: 0x24020453  addiu       $v0, $zero, 0x453 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed984) {
            ctx->pc = 0x2ED994u;
            goto label_2ed994;
        }
    }
    ctx->pc = 0x2ED98Cu;
    // 0x2ed98c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2ED98Cu;
    {
        const bool branch_taken_0x2ed98c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ed98c) {
            ctx->pc = 0x2ED998u;
            goto label_2ed998;
        }
    }
    ctx->pc = 0x2ED994u;
label_2ed994:
    // 0x2ed994: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ed994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ed998:
    // 0x2ed998: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2ED998u;
    {
        const bool branch_taken_0x2ed998 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED998u;
        // 0x2ed99c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed998) {
            ctx->pc = 0x2ED9CCu;
            goto label_2ed9cc;
        }
    }
    ctx->pc = 0x2ED9A0u;
    // 0x2ed9a0: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x2ed9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x2ed9a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ed9a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ed9a8: 0x3c01c2b4  lui         $at, 0xC2B4
    ctx->pc = 0x2ed9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49844 << 16));
    // 0x2ed9ac: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2ed9acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ed9b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ed9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed9b4: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x2ed9b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x2ed9b8: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x2ed9b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_2ed9bc:
    // 0x2ed9bc: 0xc0c10f8  jal         func_3043E0
    ctx->pc = 0x2ED9BCu;
    SET_GPR_U32(ctx, 31, 0x2ED9C4u);
    ctx->pc = 0x2ED9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED9BCu;
    // 0x2ed9c0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3043E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3043E0u, 0x2ED9BCu, 0x2ED9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED9C4u;
label_2ed9c4:
    // 0x2ed9c4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2ED9C4u;
    {
        const bool branch_taken_0x2ed9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED9C4u;
        // 0x2ed9c8: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed9c4) {
            ctx->pc = 0x2ED9F4u;
            goto label_2ed9f4;
        }
    }
    ctx->pc = 0x2ED9CCu;
label_2ed9cc:
    // 0x2ed9cc: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x2ed9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x2ed9d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ed9d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ed9d4: 0x3c01c2b4  lui         $at, 0xC2B4
    ctx->pc = 0x2ed9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49844 << 16));
    // 0x2ed9d8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2ed9d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ed9dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ed9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed9e0: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2ed9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2ed9e4: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x2ed9e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ed9e8: 0xc0c10f8  jal         func_3043E0
    ctx->pc = 0x2ED9E8u;
    SET_GPR_U32(ctx, 31, 0x2ED9F0u);
    ctx->pc = 0x2ED9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED9E8u;
    // 0x2ed9ec: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3043E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3043E0u, 0x2ED9E8u, 0x2ED9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED9F0u;
label_2ed9f0:
    // 0x2ed9f0: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2ed9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2ed9f4:
    // 0x2ed9f4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2ed9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x2ed9f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ed9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed9fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ed9fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eda00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2eda00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2eda04: 0xc08a15a  jal         func_228568
    ctx->pc = 0x2EDA04u;
    SET_GPR_U32(ctx, 31, 0x2EDA0Cu);
    ctx->pc = 0x2EDA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDA04u;
    // 0x2eda08: 0xae0211c0  sw          $v0, 0x11C0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x2EDA04u, 0x2EDA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDA0Cu;
label_2eda0c:
    // 0x2eda0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eda0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2eda10:
    // 0x2eda10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2eda10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eda14: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA14u;
        // 0x2eda18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDA1Cu;
    // 0x2eda1c: 0x0  nop
    ctx->pc = 0x2eda1cu;
    // NOP
    ctx->pc = 0x2eda20u;
}
