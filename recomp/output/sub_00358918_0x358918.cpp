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

// Function: sub_00358918
// Address: 0x358918 - 0x358a98
void sub_00358918_0x358918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358918_0x358918");
#endif

    switch (ctx->pc) {
        case 0x358950u: goto label_358950;
        case 0x358980u: goto label_358980;
        case 0x3589a8u: goto label_3589a8;
        case 0x358a08u: goto label_358a08;
        default: break;
    }

    ctx->pc = 0x358918u;

    // 0x358918: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x358918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x35891c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35891cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x358920: 0x2442d3c0  addiu       $v0, $v0, -0x2C40
    ctx->pc = 0x358920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955968));
    // 0x358924: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x358924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x358928: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x358928u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x35892c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x35892cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358930: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x358930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x358934: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x358934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358938: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x358938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x35893c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x35893cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x358940: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x358940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x358944: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x358944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358948: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x358948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x35894c: 0x0  nop
    ctx->pc = 0x35894cu;
    // NOP
label_358950:
    // 0x358950: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x358950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x358954: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x358954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x358958: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x358958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x35895c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35895cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x358960: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x358960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x358964: 0x14640032  bne         $v1, $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x358964u;
    {
        const bool branch_taken_0x358964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x358968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358964u;
        // 0x358968: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358964) {
            ctx->pc = 0x358A30u;
            goto label_358a30;
        }
    }
    ctx->pc = 0x35896Cu;
    // 0x35896c: 0x28430010  slti        $v1, $v0, 0x10
    ctx->pc = 0x35896cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x358970: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x358970u;
    {
        const bool branch_taken_0x358970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x358974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358970u;
        // 0x358974: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358970) {
            ctx->pc = 0x358950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358950;
        }
    }
    ctx->pc = 0x358978u;
    // 0x358978: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x358978u;
    {
        const bool branch_taken_0x358978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358978u;
        // 0x35897c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358978) {
            ctx->pc = 0x358A34u;
            goto label_358a34;
        }
    }
    ctx->pc = 0x358980u;
label_358980:
    // 0x358980: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x358980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358984: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x358984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x358988: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x358988u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x35898c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x35898cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x358990: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x358990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x358994: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x358994u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x358998: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x358998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35899c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35899cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3589a0: 0xc0d60d4  jal         func_358350
    ctx->pc = 0x3589A0u;
    SET_GPR_U32(ctx, 31, 0x3589A8u);
    ctx->pc = 0x3589A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3589A0u;
    // 0x3589a4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358350u, 0x3589A0u, 0x3589A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3589A8u;
label_3589a8:
    // 0x3589a8: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x3589A8u;
    {
        const bool branch_taken_0x3589a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3589ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3589A8u;
        // 0x3589ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3589a8) {
            ctx->pc = 0x358A84u;
            goto label_358a84;
        }
    }
    ctx->pc = 0x3589B0u;
    // 0x3589b0: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x3589b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3589b4: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x3589b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3589b8: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x3589b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3589bc: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x3589bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3589c0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3589c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3589c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3589c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3589c8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3589c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3589cc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3589ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3589d0: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x3589d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x3589d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3589d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3589d8: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x3589d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3589dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3589DCu;
    {
        const bool branch_taken_0x3589dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3589E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3589DCu;
        // 0x3589e0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3589dc) {
            ctx->pc = 0x3589F0u;
            goto label_3589f0;
        }
    }
    ctx->pc = 0x3589E4u;
    // 0x3589e4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3589e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3589e8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3589E8u;
    {
        const bool branch_taken_0x3589e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3589ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3589E8u;
        // 0x3589ec: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3589e8) {
            ctx->pc = 0x358A30u;
            goto label_358a30;
        }
    }
    ctx->pc = 0x3589F0u;
label_3589f0:
    // 0x3589f0: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x3589f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3589f4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3589f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3589f8: 0x28430010  slti        $v1, $v0, 0x10
    ctx->pc = 0x3589f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3589fc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3589FCu;
    {
        const bool branch_taken_0x3589fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x358A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3589FCu;
        // 0x358a00: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3589fc) {
            ctx->pc = 0x358A30u;
            goto label_358a30;
        }
    }
    ctx->pc = 0x358A04u;
    // 0x358a04: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x358a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_358a08:
    // 0x358a08: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x358a08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x358a0c: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x358a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x358a10: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x358a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x358a14: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x358a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x358a18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x358a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x358a1c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x358A1Cu;
    {
        const bool branch_taken_0x358a1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x358A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358A1Cu;
        // 0x358a20: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358a1c) {
            ctx->pc = 0x358A30u;
            goto label_358a30;
        }
    }
    ctx->pc = 0x358A24u;
    // 0x358a24: 0x28430010  slti        $v1, $v0, 0x10
    ctx->pc = 0x358a24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x358a28: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x358A28u;
    {
        const bool branch_taken_0x358a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x358A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358A28u;
        // 0x358a2c: 0xace20004  sw          $v0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358a28) {
            ctx->pc = 0x358A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358a08;
        }
    }
    ctx->pc = 0x358A30u;
label_358a30:
    // 0x358a30: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x358a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_358a34:
    // 0x358a34: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x358A34u;
    {
        const bool branch_taken_0x358a34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x358A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358A34u;
        // 0x358a38: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358a34) {
            ctx->pc = 0x358A70u;
            goto label_358a70;
        }
    }
    ctx->pc = 0x358A3Cu;
    // 0x358a3c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x358a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x358a40: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x358a40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x358a44: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x358A44u;
    {
        const bool branch_taken_0x358a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x358A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358A44u;
        // 0x358a48: 0x31900  sll         $v1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358a44) {
            ctx->pc = 0x358A70u;
            goto label_358a70;
        }
    }
    ctx->pc = 0x358A4Cu;
    // 0x358a4c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x358a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x358a50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x358a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x358a54: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x358a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x358a58: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x358a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x358a5c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x358a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x358a60: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x358a60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x358a64: 0xa2282b  sltu        $a1, $a1, $v0
    ctx->pc = 0x358a64u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x358a68: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x358A68u;
    {
        const bool branch_taken_0x358a68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x358A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358A68u;
        // 0x358a6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358a68) {
            ctx->pc = 0x358A74u;
            goto label_358a74;
        }
    }
    ctx->pc = 0x358A70u;
label_358a70:
    // 0x358a70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358a70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_358a74:
    // 0x358a74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x358a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x358a78: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x358A78u;
    {
        const bool branch_taken_0x358a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x358A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358A78u;
        // 0x358a7c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358a78) {
            ctx->pc = 0x358980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358980;
        }
    }
    ctx->pc = 0x358A80u;
    // 0x358a80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_358a84:
    // 0x358a84: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x358a84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358a88: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x358a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x358a8c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x358a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x358a90: 0x3e00008  jr          $ra
    ctx->pc = 0x358A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358A90u;
        // 0x358a94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358A98u;
}
