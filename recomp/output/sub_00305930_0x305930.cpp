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

// Function: sub_00305930
// Address: 0x305930 - 0x305c00
void sub_00305930_0x305930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305930_0x305930");
#endif

    switch (ctx->pc) {
        case 0x305958u: goto label_305958;
        case 0x305990u: goto label_305990;
        case 0x305a0cu: goto label_305a0c;
        case 0x305a90u: goto label_305a90;
        case 0x305b60u: goto label_305b60;
        case 0x305b8cu: goto label_305b8c;
        default: break;
    }

    ctx->pc = 0x305930u;

    // 0x305930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x305930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x305934: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x305934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x305938: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x305938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30593c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30593cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x305940: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x305940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x305944: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x305944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x305948: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x305948u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30594c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30594cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x305950: 0xc09008c  jal         func_240230
    ctx->pc = 0x305950u;
    SET_GPR_U32(ctx, 31, 0x305958u);
    ctx->pc = 0x305954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305950u;
    // 0x305954: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240230u, 0x305950u, 0x305958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305958u;
label_305958:
    // 0x305958: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x305958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x30595c: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x30595cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x305960: 0xc4401500  lwc1        $f0, 0x1500($v0)
    ctx->pc = 0x305960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x305964: 0xe62010c0  swc1        $f0, 0x10C0($s1)
    ctx->pc = 0x305964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4288), bits); }
    // 0x305968: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x305968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x30596c: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x30596cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x305970: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x305970u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x305974: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x305974u;
    {
        const bool branch_taken_0x305974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305974) {
            ctx->pc = 0x305978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305974u;
            // 0x305978: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3059B4u;
            goto label_3059b4;
        }
    }
    ctx->pc = 0x30597Cu;
    // 0x30597c: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x30597cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x305980: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x305980u;
    {
        const bool branch_taken_0x305980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x305980) {
            ctx->pc = 0x305984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305980u;
            // 0x305984: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3059B4u;
            goto label_3059b4;
        }
    }
    ctx->pc = 0x305988u;
    // 0x305988: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x305988u;
    SET_GPR_U32(ctx, 31, 0x305990u);
    ctx->pc = 0x30598Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305988u;
    // 0x30598c: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x305988u, 0x305990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305990u;
label_305990:
    // 0x305990: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x305990u;
    {
        const bool branch_taken_0x305990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305990) {
            ctx->pc = 0x305994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305990u;
            // 0x305994: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3059B4u;
            goto label_3059b4;
        }
    }
    ctx->pc = 0x305998u;
    // 0x305998: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x305998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x30599c: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x30599cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x3059a0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3059A0u;
    {
        const bool branch_taken_0x3059a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3059A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3059A0u;
        // 0x3059a4: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3059a0) {
            ctx->pc = 0x3059B0u;
            goto label_3059b0;
        }
    }
    ctx->pc = 0x3059A8u;
    // 0x3059a8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3059A8u;
    {
        const bool branch_taken_0x3059a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3059a8) {
            ctx->pc = 0x3059B4u;
            goto label_3059b4;
        }
    }
    ctx->pc = 0x3059B0u;
label_3059b0:
    // 0x3059b0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3059b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3059b4:
    // 0x3059b4: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x3059B4u;
    {
        const bool branch_taken_0x3059b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3059b4) {
            ctx->pc = 0x3059D4u;
            goto label_3059d4;
        }
    }
    ctx->pc = 0x3059BCu;
    // 0x3059bc: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x3059bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x3059c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3059c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3059c4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3059c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3059c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3059c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3059cc: 0x3863003d  xori        $v1, $v1, 0x3D
    ctx->pc = 0x3059ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)61);
    // 0x3059d0: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x3059d0u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3059d4:
    // 0x3059d4: 0x56600021  bnel        $s3, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x3059D4u;
    {
        const bool branch_taken_0x3059d4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x3059d4) {
            ctx->pc = 0x3059D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3059D4u;
            // 0x3059d8: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305A5Cu;
            goto label_305a5c;
        }
    }
    ctx->pc = 0x3059DCu;
    // 0x3059dc: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x3059dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x3059e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3059e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3059e4: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x3059e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x3059e8: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x3059e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x3059ec: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3059ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3059f0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3059F0u;
    {
        const bool branch_taken_0x3059f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3059F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3059F0u;
        // 0x3059f4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3059f0) {
            ctx->pc = 0x305A2Cu;
            goto label_305a2c;
        }
    }
    ctx->pc = 0x3059F8u;
    // 0x3059f8: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x3059f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x3059fc: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3059FCu;
    {
        const bool branch_taken_0x3059fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3059fc) {
            ctx->pc = 0x305A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3059FCu;
            // 0x305a00: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305A30u;
            goto label_305a30;
        }
    }
    ctx->pc = 0x305A04u;
    // 0x305a04: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x305A04u;
    SET_GPR_U32(ctx, 31, 0x305A0Cu);
    ctx->pc = 0x305A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305A04u;
    // 0x305a08: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x305A04u, 0x305A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305A0Cu;
label_305a0c:
    // 0x305a0c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x305A0Cu;
    {
        const bool branch_taken_0x305a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305a0c) {
            ctx->pc = 0x305A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305A0Cu;
            // 0x305a10: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305A30u;
            goto label_305a30;
        }
    }
    ctx->pc = 0x305A14u;
    // 0x305a14: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x305a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x305a18: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x305a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x305a1c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x305A1Cu;
    {
        const bool branch_taken_0x305a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x305A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305A1Cu;
        // 0x305a20: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305a1c) {
            ctx->pc = 0x305A2Cu;
            goto label_305a2c;
        }
    }
    ctx->pc = 0x305A24u;
    // 0x305a24: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x305A24u;
    {
        const bool branch_taken_0x305a24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x305a24) {
            ctx->pc = 0x305A30u;
            goto label_305a30;
        }
    }
    ctx->pc = 0x305A2Cu;
label_305a2c:
    // 0x305a2c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x305a2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_305a30:
    // 0x305a30: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x305A30u;
    {
        const bool branch_taken_0x305a30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x305a30) {
            ctx->pc = 0x305A50u;
            goto label_305a50;
        }
    }
    ctx->pc = 0x305A38u;
    // 0x305a38: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x305a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x305a3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x305a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x305a40: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x305a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x305a44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x305a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x305a48: 0x38630041  xori        $v1, $v1, 0x41
    ctx->pc = 0x305a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65);
    // 0x305a4c: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x305a4cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_305a50:
    // 0x305a50: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x305A50u;
    {
        const bool branch_taken_0x305a50 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x305a50) {
            ctx->pc = 0x305A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305A50u;
            // 0x305a54: 0x8e300334  lw          $s0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305A64u;
            goto label_305a64;
        }
    }
    ctx->pc = 0x305A58u;
    // 0x305a58: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x305a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_305a5c:
    // 0x305a5c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x305A5Cu;
    {
        const bool branch_taken_0x305a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305A5Cu;
        // 0x305a60: 0xc4401508  lwc1        $f0, 0x1508($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x305a5c) {
            ctx->pc = 0x305AE8u;
            goto label_305ae8;
        }
    }
    ctx->pc = 0x305A64u;
label_305a64:
    // 0x305a64: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x305a64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305a68: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x305a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x305a6c: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x305a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x305a70: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x305a70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x305a74: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x305A74u;
    {
        const bool branch_taken_0x305a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305A74u;
        // 0x305a78: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305a74) {
            ctx->pc = 0x305AB0u;
            goto label_305ab0;
        }
    }
    ctx->pc = 0x305A7Cu;
    // 0x305a7c: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x305a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x305a80: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x305A80u;
    {
        const bool branch_taken_0x305a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x305a80) {
            ctx->pc = 0x305A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305A80u;
            // 0x305a84: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305AB4u;
            goto label_305ab4;
        }
    }
    ctx->pc = 0x305A88u;
    // 0x305a88: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x305A88u;
    SET_GPR_U32(ctx, 31, 0x305A90u);
    ctx->pc = 0x305A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305A88u;
    // 0x305a8c: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x305A88u, 0x305A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305A90u;
label_305a90:
    // 0x305a90: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x305A90u;
    {
        const bool branch_taken_0x305a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305a90) {
            ctx->pc = 0x305A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305A90u;
            // 0x305a94: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305AB4u;
            goto label_305ab4;
        }
    }
    ctx->pc = 0x305A98u;
    // 0x305a98: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x305a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x305a9c: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x305a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x305aa0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x305AA0u;
    {
        const bool branch_taken_0x305aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x305AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305AA0u;
        // 0x305aa4: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305aa0) {
            ctx->pc = 0x305AB0u;
            goto label_305ab0;
        }
    }
    ctx->pc = 0x305AA8u;
    // 0x305aa8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x305AA8u;
    {
        const bool branch_taken_0x305aa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x305aa8) {
            ctx->pc = 0x305AB4u;
            goto label_305ab4;
        }
    }
    ctx->pc = 0x305AB0u;
label_305ab0:
    // 0x305ab0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x305ab0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_305ab4:
    // 0x305ab4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x305AB4u;
    {
        const bool branch_taken_0x305ab4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x305ab4) {
            ctx->pc = 0x305AD8u;
            goto label_305ad8;
        }
    }
    ctx->pc = 0x305ABCu;
    // 0x305abc: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x305abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x305ac0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x305ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x305ac4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x305ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x305ac8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x305ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x305acc: 0x2843001d  slti        $v1, $v0, 0x1D
    ctx->pc = 0x305accu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x305ad0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x305AD0u;
    {
        const bool branch_taken_0x305ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x305ad0) {
            ctx->pc = 0x305AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305AD0u;
            // 0x305ad4: 0x2853003d  slti        $s3, $v0, 0x3D (Delay Slot)
            SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x305AD8u;
            goto label_305ad8;
        }
    }
    ctx->pc = 0x305AD8u;
label_305ad8:
    // 0x305ad8: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x305AD8u;
    {
        const bool branch_taken_0x305ad8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x305ad8) {
            ctx->pc = 0x305ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305AD8u;
            // 0x305adc: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305AF0u;
            goto label_305af0;
        }
    }
    ctx->pc = 0x305AE0u;
    // 0x305ae0: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x305ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x305ae4: 0xc4401504  lwc1        $f0, 0x1504($v0)
    ctx->pc = 0x305ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_305ae8:
    // 0x305ae8: 0xe62010c0  swc1        $f0, 0x10C0($s1)
    ctx->pc = 0x305ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4288), bits); }
    // 0x305aec: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x305aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_305af0:
    // 0x305af0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x305af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x305af4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x305AF4u;
    {
        const bool branch_taken_0x305af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305AF4u;
        // 0x305af8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305af4) {
            ctx->pc = 0x305B58u;
            goto label_305b58;
        }
    }
    ctx->pc = 0x305AFCu;
    // 0x305afc: 0xc62004fc  lwc1        $f0, 0x4FC($s1)
    ctx->pc = 0x305afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x305b00: 0xc6210500  lwc1        $f1, 0x500($s1)
    ctx->pc = 0x305b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x305b04: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x305b04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x305b08: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x305b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x305b0c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x305b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x305b10: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x305b10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x305b14: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x305b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x305b18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x305b18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x305b1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x305b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x305b20: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x305b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x305b24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x305b24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x305b28: 0x0  nop
    ctx->pc = 0x305b28u;
    // NOP
    // 0x305b2c: 0x0  nop
    ctx->pc = 0x305b2cu;
    // NOP
    // 0x305b30: 0x46000004  c1          0x4
    ctx->pc = 0x305b30u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x305b34: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x305b34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x305b38: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x305b38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x305b3c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x305b3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x305b40: 0x0  nop
    ctx->pc = 0x305b40u;
    // NOP
    // 0x305b44: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x305B44u;
    {
        const bool branch_taken_0x305b44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x305b44) {
            ctx->pc = 0x305B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305B44u;
            // 0x305b48: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x305B4Cu;
            goto label_305b4c;
        }
    }
    ctx->pc = 0x305B4Cu;
label_305b4c:
    // 0x305b4c: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x305b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x305b50: 0xe44001b0  swc1        $f0, 0x1B0($v0)
    ctx->pc = 0x305b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 432), bits); }
    // 0x305b54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x305b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_305b58:
    // 0x305b58: 0xc0b98ce  jal         func_2E6338
    ctx->pc = 0x305B58u;
    SET_GPR_U32(ctx, 31, 0x305B60u);
    ctx->pc = 0x305B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305B58u;
    // 0x305b5c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6338u, 0x305B58u, 0x305B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305B60u;
label_305b60:
    // 0x305b60: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x305b60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x305b64: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x305b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x305b68: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x305b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x305b6c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x305b6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x305b70: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x305B70u;
    {
        const bool branch_taken_0x305b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B70u;
        // 0x305b74: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305b70) {
            ctx->pc = 0x305BACu;
            goto label_305bac;
        }
    }
    ctx->pc = 0x305B78u;
    // 0x305b78: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x305b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x305b7c: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x305B7Cu;
    {
        const bool branch_taken_0x305b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x305b7c) {
            ctx->pc = 0x305B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305B7Cu;
            // 0x305b80: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305BB0u;
            goto label_305bb0;
        }
    }
    ctx->pc = 0x305B84u;
    // 0x305b84: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x305B84u;
    SET_GPR_U32(ctx, 31, 0x305B8Cu);
    ctx->pc = 0x305B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305B84u;
    // 0x305b88: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x305B84u, 0x305B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305B8Cu;
label_305b8c:
    // 0x305b8c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x305B8Cu;
    {
        const bool branch_taken_0x305b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305b8c) {
            ctx->pc = 0x305B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305B8Cu;
            // 0x305b90: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305BB0u;
            goto label_305bb0;
        }
    }
    ctx->pc = 0x305B94u;
    // 0x305b94: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x305b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x305b98: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x305b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x305b9c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x305B9Cu;
    {
        const bool branch_taken_0x305b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x305BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B9Cu;
        // 0x305ba0: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305b9c) {
            ctx->pc = 0x305BACu;
            goto label_305bac;
        }
    }
    ctx->pc = 0x305BA4u;
    // 0x305ba4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x305BA4u;
    {
        const bool branch_taken_0x305ba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x305ba4) {
            ctx->pc = 0x305BB0u;
            goto label_305bb0;
        }
    }
    ctx->pc = 0x305BACu;
label_305bac:
    // 0x305bac: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x305bacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_305bb0:
    // 0x305bb0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x305BB0u;
    {
        const bool branch_taken_0x305bb0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x305bb0) {
            ctx->pc = 0x305BD0u;
            goto label_305bd0;
        }
    }
    ctx->pc = 0x305BB8u;
    // 0x305bb8: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x305bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x305bbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x305bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x305bc0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x305bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x305bc4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x305bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x305bc8: 0x38630041  xori        $v1, $v1, 0x41
    ctx->pc = 0x305bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65);
    // 0x305bcc: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x305bccu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_305bd0:
    // 0x305bd0: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x305BD0u;
    {
        const bool branch_taken_0x305bd0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x305BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305BD0u;
        // 0x305bd4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305bd0) {
            ctx->pc = 0x305BE4u;
            goto label_305be4;
        }
    }
    ctx->pc = 0x305BD8u;
    // 0x305bd8: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x305bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x305bdc: 0xc4401580  lwc1        $f0, 0x1580($v0)
    ctx->pc = 0x305bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x305be0: 0xe6201294  swc1        $f0, 0x1294($s1)
    ctx->pc = 0x305be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4756), bits); }
label_305be4:
    // 0x305be4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x305be4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x305be8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x305be8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x305bec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x305becu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x305bf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x305bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x305bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x305BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305BF4u;
        // 0x305bf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305BFCu;
    // 0x305bfc: 0x0  nop
    ctx->pc = 0x305bfcu;
    // NOP
    ctx->pc = 0x305c00u;
}
