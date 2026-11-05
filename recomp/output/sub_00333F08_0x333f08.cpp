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

// Function: sub_00333F08
// Address: 0x333f08 - 0x334018
void sub_00333F08_0x333f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333F08_0x333f08");
#endif

    switch (ctx->pc) {
        case 0x333f70u: goto label_333f70;
        case 0x333f7cu: goto label_333f7c;
        case 0x333f88u: goto label_333f88;
        case 0x333f94u: goto label_333f94;
        case 0x333facu: goto label_333fac;
        case 0x333fc0u: goto label_333fc0;
        case 0x333fc8u: goto label_333fc8;
        case 0x333fd4u: goto label_333fd4;
        case 0x333fdcu: goto label_333fdc;
        case 0x333fe8u: goto label_333fe8;
        default: break;
    }

    ctx->pc = 0x333f08u;

    // 0x333f08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x333f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x333f0c: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x333f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x333f10: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x333f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x333f14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x333f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x333f18: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x333f18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333f1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x333f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x333f20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x333f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x333f24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x333f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x333f28: 0x8e630484  lw          $v1, 0x484($s3)
    ctx->pc = 0x333f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1156)));
    // 0x333f2c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x333F2Cu;
    {
        const bool branch_taken_0x333f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x333F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333F2Cu;
        // 0x333f30: 0x28620049  slti        $v0, $v1, 0x49 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)73) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x333f2c) {
            ctx->pc = 0x333F68u;
            goto label_333f68;
        }
    }
    ctx->pc = 0x333F34u;
    // 0x333f34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x333F34u;
    {
        const bool branch_taken_0x333f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x333F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333F34u;
        // 0x333f38: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333f34) {
            ctx->pc = 0x333F4Cu;
            goto label_333f4c;
        }
    }
    ctx->pc = 0x333F3Cu;
    // 0x333f3c: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x333F3Cu;
    {
        const bool branch_taken_0x333f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x333F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333F3Cu;
        // 0x333f40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333f3c) {
            ctx->pc = 0x333FF0u;
            goto label_333ff0;
        }
    }
    ctx->pc = 0x333F44u;
    // 0x333f44: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x333F44u;
    {
        const bool branch_taken_0x333f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333F44u;
        // 0x333f48: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333f44) {
            ctx->pc = 0x333FFCu;
            goto label_333ffc;
        }
    }
    ctx->pc = 0x333F4Cu;
label_333f4c:
    // 0x333f4c: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x333f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x333f50: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x333F50u;
    {
        const bool branch_taken_0x333f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x333F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333F50u;
        // 0x333f54: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333f50) {
            ctx->pc = 0x333FB8u;
            goto label_333fb8;
        }
    }
    ctx->pc = 0x333F58u;
    // 0x333f58: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x333F58u;
    {
        const bool branch_taken_0x333f58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x333F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333F58u;
        // 0x333f5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333f58) {
            ctx->pc = 0x333FF0u;
            goto label_333ff0;
        }
    }
    ctx->pc = 0x333F60u;
    // 0x333f60: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x333F60u;
    {
        const bool branch_taken_0x333f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333F60u;
        // 0x333f64: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333f60) {
            ctx->pc = 0x333FFCu;
            goto label_333ffc;
        }
    }
    ctx->pc = 0x333F68u;
label_333f68:
    // 0x333f68: 0xc0cdf2e  jal         func_337CB8
    ctx->pc = 0x333F68u;
    SET_GPR_U32(ctx, 31, 0x333F70u);
    ctx->pc = 0x333F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333F68u;
    // 0x333f6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x333F68u, 0x333F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333F70u;
label_333f70:
    // 0x333f70: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x333f70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333f74: 0xc0cdf52  jal         func_337D48
    ctx->pc = 0x333F74u;
    SET_GPR_U32(ctx, 31, 0x333F7Cu);
    ctx->pc = 0x333F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333F74u;
    // 0x333f78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x333F74u, 0x333F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333F7Cu;
label_333f7c:
    // 0x333f7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x333f7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333f80: 0xc0cdf2e  jal         func_337CB8
    ctx->pc = 0x333F80u;
    SET_GPR_U32(ctx, 31, 0x333F88u);
    ctx->pc = 0x333F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333F80u;
    // 0x333f84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x333F80u, 0x333F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333F88u;
label_333f88:
    // 0x333f88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x333f88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333f8c: 0xc0cdf52  jal         func_337D48
    ctx->pc = 0x333F8Cu;
    SET_GPR_U32(ctx, 31, 0x333F94u);
    ctx->pc = 0x333F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333F8Cu;
    // 0x333f90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x333F8Cu, 0x333F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333F94u;
label_333f94:
    // 0x333f94: 0x250182a  slt         $v1, $s2, $s0
    ctx->pc = 0x333f94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x333f98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x333f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333f9c: 0x243800b  movn        $s0, $s2, $v1
    ctx->pc = 0x333f9cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
    // 0x333fa0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x333fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333fa4: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x333FA4u;
    SET_GPR_U32(ctx, 31, 0x333FACu);
    ctx->pc = 0x333FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333FA4u;
    // 0x333fa8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x333FA4u, 0x333FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333FACu;
label_333fac:
    // 0x333fac: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x333facu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x333fb0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x333FB0u;
    {
        const bool branch_taken_0x333fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333FB0u;
        // 0x333fb4: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333fb0) {
            ctx->pc = 0x333FF4u;
            goto label_333ff4;
        }
    }
    ctx->pc = 0x333FB8u;
label_333fb8:
    // 0x333fb8: 0xc0cdf2e  jal         func_337CB8
    ctx->pc = 0x333FB8u;
    SET_GPR_U32(ctx, 31, 0x333FC0u);
    ctx->pc = 0x333FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333FB8u;
    // 0x333fbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x333FB8u, 0x333FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333FC0u;
label_333fc0:
    // 0x333fc0: 0xc0cdf52  jal         func_337D48
    ctx->pc = 0x333FC0u;
    SET_GPR_U32(ctx, 31, 0x333FC8u);
    ctx->pc = 0x333FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333FC0u;
    // 0x333fc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x333FC0u, 0x333FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333FC8u;
label_333fc8:
    // 0x333fc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x333fc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333fcc: 0xc0cdf2e  jal         func_337CB8
    ctx->pc = 0x333FCCu;
    SET_GPR_U32(ctx, 31, 0x333FD4u);
    ctx->pc = 0x333FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333FCCu;
    // 0x333fd0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x333FCCu, 0x333FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333FD4u;
label_333fd4:
    // 0x333fd4: 0xc0cdf52  jal         func_337D48
    ctx->pc = 0x333FD4u;
    SET_GPR_U32(ctx, 31, 0x333FDCu);
    ctx->pc = 0x333FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333FD4u;
    // 0x333fd8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x333FD4u, 0x333FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333FDCu;
label_333fdc:
    // 0x333fdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x333fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333fe0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x333FE0u;
    SET_GPR_U32(ctx, 31, 0x333FE8u);
    ctx->pc = 0x333FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333FE0u;
    // 0x333fe4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x333FE0u, 0x333FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333FE8u;
label_333fe8:
    // 0x333fe8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x333FE8u;
    {
        const bool branch_taken_0x333fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333FE8u;
        // 0x333fec: 0xae620480  sw          $v0, 0x480($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333fe8) {
            ctx->pc = 0x333FF4u;
            goto label_333ff4;
        }
    }
    ctx->pc = 0x333FF0u;
label_333ff0:
    // 0x333ff0: 0xae600498  sw          $zero, 0x498($s3)
    ctx->pc = 0x333ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1176), GPR_U32(ctx, 0));
label_333ff4:
    // 0x333ff4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x333ff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333ff8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x333ff8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_333ffc:
    // 0x333ffc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x333ffcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x334000: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x334000u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x334004: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x334004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x334008: 0x3e00008  jr          $ra
    ctx->pc = 0x334008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334008u;
        // 0x33400c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334010u;
    // 0x334010: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x334010u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x334014: 0x0  nop
    ctx->pc = 0x334014u;
    // NOP
    ctx->pc = 0x334018u;
}
