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

// Function: sub_001A59C0
// Address: 0x1a59c0 - 0x1a5b20
void sub_001A59C0_0x1a59c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A59C0_0x1a59c0");
#endif

    switch (ctx->pc) {
        case 0x1a59fcu: goto label_1a59fc;
        case 0x1a5a0cu: goto label_1a5a0c;
        case 0x1a5a1cu: goto label_1a5a1c;
        case 0x1a5a38u: goto label_1a5a38;
        case 0x1a5a48u: goto label_1a5a48;
        case 0x1a5a84u: goto label_1a5a84;
        case 0x1a5aa0u: goto label_1a5aa0;
        case 0x1a5ab0u: goto label_1a5ab0;
        case 0x1a5ad4u: goto label_1a5ad4;
        default: break;
    }

    ctx->pc = 0x1a59c0u;

    // 0x1a59c0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1a59c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1a59c4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a59c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a59c8: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x1a59c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD70u));
    // 0x1a59cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a59ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a59d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a59d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a59d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a59d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a59d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a59d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a59dc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a59dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a59e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a59e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a59e4: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1A59E4u;
    {
        const bool branch_taken_0x1a59e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A59E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A59E4u;
        // 0x1a59e8: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a59e4) {
            ctx->pc = 0x1A5B00u;
            goto label_1a5b00;
        }
    }
    ctx->pc = 0x1A59ECu;
    // 0x1a59ec: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x1a59ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x1a59f0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a59f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a59f4: 0xc07524a  jal         func_1D4928
    ctx->pc = 0x1A59F4u;
    SET_GPR_U32(ctx, 31, 0x1A59FCu);
    ctx->pc = 0x1A59F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A59F4u;
    // 0x1a59f8: 0x24840470  addiu       $a0, $a0, 0x470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4928u, 0x1A59F4u, 0x1A59FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A59FCu;
label_1a59fc:
    // 0x1a59fc: 0x8e300274  lw          $s0, 0x274($s1)
    ctx->pc = 0x1a59fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
    // 0x1a5a00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a5a00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5a04: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1A5A04u;
    SET_GPR_U32(ctx, 31, 0x1A5A0Cu);
    ctx->pc = 0x1A5A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5A04u;
    // 0x1a5a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1A5A04u, 0x1A5A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5A0Cu;
label_1a5a0c:
    // 0x1a5a0c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A5A0Cu;
    {
        const bool branch_taken_0x1a5a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5a0c) {
            ctx->pc = 0x1A5A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5A0Cu;
            // 0x1a5a10: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5A28u;
            goto label_1a5a28;
        }
    }
    ctx->pc = 0x1A5A14u;
    // 0x1a5a14: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1A5A14u;
    SET_GPR_U32(ctx, 31, 0x1A5A1Cu);
    ctx->pc = 0x1A5A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5A14u;
    // 0x1a5a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1A5A14u, 0x1A5A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5A1Cu;
label_1a5a1c:
    // 0x1a5a1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a5a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5a20: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A5A20u;
    {
        const bool branch_taken_0x1a5a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a5a20) {
            ctx->pc = 0x1A5A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5A20u;
            // 0x1a5a24: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5A28u;
            goto label_1a5a28;
        }
    }
    ctx->pc = 0x1A5A28u;
label_1a5a28:
    // 0x1a5a28: 0x1260001f  beqz        $s3, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A5A28u;
    {
        const bool branch_taken_0x1a5a28 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A28u;
        // 0x1a5a2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a28) {
            ctx->pc = 0x1A5AA8u;
            goto label_1a5aa8;
        }
    }
    ctx->pc = 0x1A5A30u;
    // 0x1a5a30: 0xc09876c  jal         func_261DB0
    ctx->pc = 0x1A5A30u;
    SET_GPR_U32(ctx, 31, 0x1A5A38u);
    ctx->pc = 0x1A5A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5A30u;
    // 0x1a5a34: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261DB0u, 0x1A5A30u, 0x1A5A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5A38u;
label_1a5a38:
    // 0x1a5a38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a5a38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5a3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a5a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5a40: 0xc069664  jal         func_1A5990
    ctx->pc = 0x1A5A40u;
    SET_GPR_U32(ctx, 31, 0x1A5A48u);
    ctx->pc = 0x1A5A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5A40u;
    // 0x1a5a44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5990u, 0x1A5A40u, 0x1A5A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5A48u;
label_1a5a48:
    // 0x1a5a48: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a5a48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5a4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a5a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a5a50: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1A5A50u;
    {
        const bool branch_taken_0x1a5a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A5A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A50u;
        // 0x1a5a54: 0x246206b8  addiu       $v0, $v1, 0x6B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a50) {
            ctx->pc = 0x1A5B00u;
            goto label_1a5b00;
        }
    }
    ctx->pc = 0x1A5A58u;
    // 0x1a5a58: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x1a5a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1a5a5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a5a60: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1a5a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1a5a64: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a5a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a5a68: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1a5a68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5a6c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1a5a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5a70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a5a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5a74: 0x8c64bd30  lw          $a0, -0x42D0($v1)
    ctx->pc = 0x1a5a74u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD30u));
    // 0x1a5a78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a5a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5a7c: 0xc0b5c36  jal         func_2D70D8
    ctx->pc = 0x1A5A7Cu;
    SET_GPR_U32(ctx, 31, 0x1A5A84u);
    ctx->pc = 0x1A5A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5A7Cu;
    // 0x1a5a80: 0x7800a  movz        $s0, $zero, $a3 (Delay Slot)
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D70D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D70D8u, 0x1A5A7Cu, 0x1A5A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5A84u;
label_1a5a84:
    // 0x1a5a84: 0x2980a  movz        $s3, $zero, $v0
    ctx->pc = 0x1a5a84u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    // 0x1a5a88: 0x1600001d  bnez        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1A5A88u;
    {
        const bool branch_taken_0x1a5a88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A88u;
        // 0x1a5a8c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a88) {
            ctx->pc = 0x1A5B00u;
            goto label_1a5b00;
        }
    }
    ctx->pc = 0x1A5A90u;
    // 0x1a5a90: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A5A90u;
    {
        const bool branch_taken_0x1a5a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A90u;
        // 0x1a5a94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a90) {
            ctx->pc = 0x1A5B04u;
            goto label_1a5b04;
        }
    }
    ctx->pc = 0x1A5A98u;
    // 0x1a5a98: 0xc0dbe86  jal         func_36FA18
    ctx->pc = 0x1A5A98u;
    SET_GPR_U32(ctx, 31, 0x1A5AA0u);
    ctx->pc = 0x1A5A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5A98u;
    // 0x1a5a9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x1A5A98u, 0x1A5AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5AA0u;
label_1a5aa0:
    // 0x1a5aa0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A5AA0u;
    {
        const bool branch_taken_0x1a5aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5AA0u;
        // 0x1a5aa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5aa0) {
            ctx->pc = 0x1A5B04u;
            goto label_1a5b04;
        }
    }
    ctx->pc = 0x1A5AA8u;
label_1a5aa8:
    // 0x1a5aa8: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1A5AA8u;
    SET_GPR_U32(ctx, 31, 0x1A5AB0u);
    ctx->pc = 0x1A5AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5AA8u;
    // 0x1a5aac: 0x8e240274  lw          $a0, 0x274($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1A5AA8u, 0x1A5AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5AB0u;
label_1a5ab0:
    // 0x1a5ab0: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x1a5ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x1a5ab4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A5AB4u;
    {
        const bool branch_taken_0x1a5ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5AB4u;
        // 0x1a5ab8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ab4) {
            ctx->pc = 0x1A5B04u;
            goto label_1a5b04;
        }
    }
    ctx->pc = 0x1A5ABCu;
    // 0x1a5abc: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1a5abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1a5ac0: 0x8c430a24  lw          $v1, 0xA24($v0)
    ctx->pc = 0x1a5ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2596)));
    // 0x1a5ac4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1A5AC4u;
    {
        const bool branch_taken_0x1a5ac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5AC4u;
        // 0x1a5ac8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ac4) {
            ctx->pc = 0x1A5B04u;
            goto label_1a5b04;
        }
    }
    ctx->pc = 0x1A5ACCu;
    // 0x1a5acc: 0xc097f52  jal         func_25FD48
    ctx->pc = 0x1A5ACCu;
    SET_GPR_U32(ctx, 31, 0x1A5AD4u);
    ctx->pc = 0x1A5AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5ACCu;
    // 0x1a5ad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FD48u, 0x1A5ACCu, 0x1A5AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5AD4u;
label_1a5ad4:
    // 0x1a5ad4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A5AD4u;
    {
        const bool branch_taken_0x1a5ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5ad4) {
            ctx->pc = 0x1A5AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5AD4u;
            // 0x1a5ad8: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5AF4u;
            goto label_1a5af4;
        }
    }
    ctx->pc = 0x1A5ADCu;
    // 0x1a5adc: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1a5adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1a5ae0: 0x8c431ed8  lw          $v1, 0x1ED8($v0)
    ctx->pc = 0x1a5ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7896)));
    // 0x1a5ae4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A5AE4u;
    {
        const bool branch_taken_0x1a5ae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5AE4u;
        // 0x1a5ae8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ae4) {
            ctx->pc = 0x1A5B04u;
            goto label_1a5b04;
        }
    }
    ctx->pc = 0x1A5AECu;
    // 0x1a5aec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5AECu;
    {
        const bool branch_taken_0x1a5aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5AECu;
        // 0x1a5af0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5aec) {
            ctx->pc = 0x1A5B04u;
            goto label_1a5b04;
        }
    }
    ctx->pc = 0x1A5AF4u;
label_1a5af4:
    // 0x1a5af4: 0x8c831ed0  lw          $v1, 0x1ED0($a0)
    ctx->pc = 0x1a5af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7888)));
    // 0x1a5af8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A5AF8u;
    {
        const bool branch_taken_0x1a5af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5AF8u;
        // 0x1a5afc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5af8) {
            ctx->pc = 0x1A5B04u;
            goto label_1a5b04;
        }
    }
    ctx->pc = 0x1A5B00u;
label_1a5b00:
    // 0x1a5b00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a5b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a5b04:
    // 0x1a5b04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5b04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5b08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a5b08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a5b0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a5b0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5b10: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a5b10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a5b14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a5b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5b18: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B18u;
        // 0x1a5b1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5B20u;
}
