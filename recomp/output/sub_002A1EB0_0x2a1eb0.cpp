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

// Function: sub_002A1EB0
// Address: 0x2a1eb0 - 0x2a22f8
void sub_002A1EB0_0x2a1eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1EB0_0x2a1eb0");
#endif

    switch (ctx->pc) {
        case 0x2a1ed4u: goto label_2a1ed4;
        case 0x2a1f10u: goto label_2a1f10;
        case 0x2a1f34u: goto label_2a1f34;
        case 0x2a1f48u: goto label_2a1f48;
        case 0x2a1f88u: goto label_2a1f88;
        case 0x2a1fa0u: goto label_2a1fa0;
        case 0x2a1fdcu: goto label_2a1fdc;
        case 0x2a1ff0u: goto label_2a1ff0;
        case 0x2a2008u: goto label_2a2008;
        case 0x2a201cu: goto label_2a201c;
        case 0x2a2030u: goto label_2a2030;
        case 0x2a20a0u: goto label_2a20a0;
        case 0x2a2110u: goto label_2a2110;
        case 0x2a2200u: goto label_2a2200;
        case 0x2a2210u: goto label_2a2210;
        case 0x2a2288u: goto label_2a2288;
        case 0x2a22a0u: goto label_2a22a0;
        case 0x2a22ccu: goto label_2a22cc;
        default: break;
    }

    ctx->pc = 0x2a1eb0u;

    // 0x2a1eb0: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x2a1eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x2a1eb4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2a1eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1eb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a1eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a1ebc: 0x8c440594  lw          $a0, 0x594($v0)
    ctx->pc = 0x2a1ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x520594u));
    // 0x2a1ec0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a1ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1ec4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1EC4u;
    {
        const bool branch_taken_0x2a1ec4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A1EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1EC4u;
        // 0x2a1ec8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1ec4) {
            ctx->pc = 0x2A1ED4u;
            goto label_2a1ed4;
        }
    }
    ctx->pc = 0x2A1ECCu;
    // 0x2a1ecc: 0xc0a7b60  jal         func_29ED80
    ctx->pc = 0x2A1ECCu;
    SET_GPR_U32(ctx, 31, 0x2A1ED4u);
    ctx->pc = 0x2A1ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1ECCu;
    // 0x2a1ed0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29ED80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29ED80u, 0x2A1ECCu, 0x2A1ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1ED4u;
label_2a1ed4:
    // 0x2a1ed4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a1ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1ED8u;
        // 0x2a1edc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1EE0u;
    // 0x2a1ee0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a1ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a1ee4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a1ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a1ee8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a1ee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1eec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a1eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a1ef0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a1ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a1ef4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a1ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a1ef8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2a1ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2a1efc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2a1efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2a1f00: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2a1f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2a1f04: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2a1f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2a1f08: 0xc0a52c0  jal         func_294B00
    ctx->pc = 0x2A1F08u;
    SET_GPR_U32(ctx, 31, 0x2A1F10u);
    ctx->pc = 0x2A1F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1F08u;
    // 0x2a1f0c: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x294B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294B00u, 0x2A1F08u, 0x2A1F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1F10u;
label_2a1f10:
    // 0x2a1f10: 0x104000ee  beqz        $v0, . + 4 + (0xEE << 2)
    ctx->pc = 0x2A1F10u;
    {
        const bool branch_taken_0x2a1f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F10u;
        // 0x2a1f14: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1f10) {
            ctx->pc = 0x2A22CCu;
            goto label_2a22cc;
        }
    }
    ctx->pc = 0x2A1F18u;
    // 0x2a1f18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1f1c: 0x8c52bd50  lw          $s2, -0x42B0($v0)
    ctx->pc = 0x2a1f1cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
    // 0x2a1f20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a1f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1f24: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2a1f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2a1f28: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2a1f28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a1f2c: 0xc0a890a  jal         func_2A2428
    ctx->pc = 0x2A1F2Cu;
    SET_GPR_U32(ctx, 31, 0x2A1F34u);
    ctx->pc = 0x2A1F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1F2Cu;
    // 0x2a1f30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2428u, 0x2A1F2Cu, 0x2A1F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1F34u;
label_2a1f34:
    // 0x2a1f34: 0x8e420418  lw          $v0, 0x418($s2)
    ctx->pc = 0x2a1f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1048)));
    // 0x2a1f38: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A1F38u;
    {
        const bool branch_taken_0x2a1f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F38u;
        // 0x2a1f3c: 0x8e510334  lw          $s1, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1f38) {
            ctx->pc = 0x2A1F88u;
            goto label_2a1f88;
        }
    }
    ctx->pc = 0x2A1F40u;
    // 0x2a1f40: 0xc0894f6  jal         func_2253D8
    ctx->pc = 0x2A1F40u;
    SET_GPR_U32(ctx, 31, 0x2A1F48u);
    ctx->pc = 0x2A1F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1F40u;
    // 0x2a1f44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2253D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2253D8u, 0x2A1F40u, 0x2A1F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1F48u;
label_2a1f48:
    // 0x2a1f48: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A1F48u;
    {
        const bool branch_taken_0x2a1f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1f48) {
            ctx->pc = 0x2A1F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1F48u;
            // 0x2a1f4c: 0x8e430418  lw          $v1, 0x418($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1F8Cu;
            goto label_2a1f8c;
        }
    }
    ctx->pc = 0x2A1F50u;
    // 0x2a1f50: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x2a1f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x2a1f54: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2a1f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2a1f58: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1F58u;
    {
        const bool branch_taken_0x2a1f58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A1F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F58u;
        // 0x2a1f5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1f58) {
            ctx->pc = 0x2A1F6Cu;
            goto label_2a1f6c;
        }
    }
    ctx->pc = 0x2A1F60u;
    // 0x2a1f60: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x2a1f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2a1f64: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A1F64u;
    {
        const bool branch_taken_0x2a1f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a1f64) {
            ctx->pc = 0x2A1F70u;
            goto label_2a1f70;
        }
    }
    ctx->pc = 0x2A1F6Cu;
label_2a1f6c:
    // 0x2a1f6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a1f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a1f70:
    // 0x2a1f70: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A1F70u;
    {
        const bool branch_taken_0x2a1f70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1f70) {
            ctx->pc = 0x2A1F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1F70u;
            // 0x2a1f74: 0x8e430418  lw          $v1, 0x418($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1F8Cu;
            goto label_2a1f8c;
        }
    }
    ctx->pc = 0x2A1F78u;
    // 0x2a1f78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1f7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a1f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1f80: 0xc0a890a  jal         func_2A2428
    ctx->pc = 0x2A1F80u;
    SET_GPR_U32(ctx, 31, 0x2A1F88u);
    ctx->pc = 0x2A1F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1F80u;
    // 0x2a1f84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2428u, 0x2A1F80u, 0x2A1F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1F88u;
label_2a1f88:
    // 0x2a1f88: 0x8e430418  lw          $v1, 0x418($s2)
    ctx->pc = 0x2a1f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1048)));
label_2a1f8c:
    // 0x2a1f8c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2a1f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a1f90: 0x54620018  bnel        $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2A1F90u;
    {
        const bool branch_taken_0x2a1f90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a1f90) {
            ctx->pc = 0x2A1F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1F90u;
            // 0x2a1f94: 0x8e430418  lw          $v1, 0x418($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1FF4u;
            goto label_2a1ff4;
        }
    }
    ctx->pc = 0x2A1F98u;
    // 0x2a1f98: 0xc083bb2  jal         func_20EEC8
    ctx->pc = 0x2A1F98u;
    SET_GPR_U32(ctx, 31, 0x2A1FA0u);
    ctx->pc = 0x2A1F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1F98u;
    // 0x2a1f9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EEC8u, 0x2A1F98u, 0x2A1FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1FA0u;
label_2a1fa0:
    // 0x2a1fa0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2a1fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a1fa4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2a1fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a1fa8: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x2a1fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a1fac: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2a1facu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2a1fb0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2a1fb0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2a1fb4: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2a1fb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2a1fb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a1fb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1fbc: 0x0  nop
    ctx->pc = 0x2a1fbcu;
    // NOP
    // 0x2a1fc0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2a1fc0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1fc4: 0x0  nop
    ctx->pc = 0x2a1fc4u;
    // NOP
    // 0x2a1fc8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2A1FC8u;
    {
        const bool branch_taken_0x2a1fc8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A1FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1FC8u;
        // 0x2a1fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1fc8) {
            ctx->pc = 0x2A1FE4u;
            goto label_2a1fe4;
        }
    }
    ctx->pc = 0x2A1FD0u;
    // 0x2a1fd0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2a1fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a1fd4: 0xc0a890a  jal         func_2A2428
    ctx->pc = 0x2A1FD4u;
    SET_GPR_U32(ctx, 31, 0x2A1FDCu);
    ctx->pc = 0x2A1FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1FD4u;
    // 0x2a1fd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2428u, 0x2A1FD4u, 0x2A1FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1FDCu;
label_2a1fdc:
    // 0x2a1fdc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A1FDCu;
    {
        const bool branch_taken_0x2a1fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1FDCu;
        // 0x2a1fe0: 0x8e430418  lw          $v1, 0x418($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1fdc) {
            ctx->pc = 0x2A1FF4u;
            goto label_2a1ff4;
        }
    }
    ctx->pc = 0x2A1FE4u;
label_2a1fe4:
    // 0x2a1fe4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a1fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a1fe8: 0xc0a890a  jal         func_2A2428
    ctx->pc = 0x2A1FE8u;
    SET_GPR_U32(ctx, 31, 0x2A1FF0u);
    ctx->pc = 0x2A1FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1FE8u;
    // 0x2a1fec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2428u, 0x2A1FE8u, 0x2A1FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1FF0u;
label_2a1ff0:
    // 0x2a1ff0: 0x8e430418  lw          $v1, 0x418($s2)
    ctx->pc = 0x2a1ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1048)));
label_2a1ff4:
    // 0x2a1ff4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2a1ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a1ff8: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2A1FF8u;
    {
        const bool branch_taken_0x2a1ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A1FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1FF8u;
        // 0x2a1ffc: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1ff8) {
            ctx->pc = 0x2A2034u;
            goto label_2a2034;
        }
    }
    ctx->pc = 0x2A2000u;
    // 0x2a2000: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x2A2000u;
    SET_GPR_U32(ctx, 31, 0x2A2008u);
    ctx->pc = 0x2A2004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2000u;
    // 0x2a2004: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2A2000u, 0x2A2008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2008u;
label_2a2008:
    // 0x2a2008: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A2008u;
    {
        const bool branch_taken_0x2a2008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2008u;
        // 0x2a200c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2008) {
            ctx->pc = 0x2A2024u;
            goto label_2a2024;
        }
    }
    ctx->pc = 0x2A2010u;
    // 0x2a2010: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2a2010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a2014: 0xc0a890a  jal         func_2A2428
    ctx->pc = 0x2A2014u;
    SET_GPR_U32(ctx, 31, 0x2A201Cu);
    ctx->pc = 0x2A2018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2014u;
    // 0x2a2018: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2428u, 0x2A2014u, 0x2A201Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A201Cu;
label_2a201c:
    // 0x2a201c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A201Cu;
    {
        const bool branch_taken_0x2a201c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A201Cu;
        // 0x2a2020: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a201c) {
            ctx->pc = 0x2A2034u;
            goto label_2a2034;
        }
    }
    ctx->pc = 0x2A2024u;
label_2a2024:
    // 0x2a2024: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2a2024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a2028: 0xc0a890a  jal         func_2A2428
    ctx->pc = 0x2A2028u;
    SET_GPR_U32(ctx, 31, 0x2A2030u);
    ctx->pc = 0x2A202Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2028u;
    // 0x2a202c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2428u, 0x2A2028u, 0x2A2030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2030u;
label_2a2030:
    // 0x2a2030: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2a2030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_2a2034:
    // 0x2a2034: 0x8c621874  lw          $v0, 0x1874($v1)
    ctx->pc = 0x2a2034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6260)));
    // 0x2a2038: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2038u;
    {
        const bool branch_taken_0x2a2038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A203Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2038u;
        // 0x2a203c: 0x3c16004c  lui         $s6, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2038) {
            ctx->pc = 0x2A204Cu;
            goto label_2a204c;
        }
    }
    ctx->pc = 0x2A2040u;
    // 0x2a2040: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a2040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2044: 0xe6d41870  swc1        $f20, 0x1870($s6)
    ctx->pc = 0x2a2044u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 6256), bits); }
    // 0x2a2048: 0xac621874  sw          $v0, 0x1874($v1)
    ctx->pc = 0x2a2048u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6260), GPR_U32(ctx, 2));
label_2a204c:
    // 0x2a204c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2a204cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2a2050: 0x8c62187c  lw          $v0, 0x187C($v1)
    ctx->pc = 0x2a2050u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C187Cu));
    // 0x2a2054: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2054u;
    {
        const bool branch_taken_0x2a2054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2054u;
        // 0x2a2058: 0x3c15004c  lui         $s5, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2054) {
            ctx->pc = 0x2A2068u;
            goto label_2a2068;
        }
    }
    ctx->pc = 0x2A205Cu;
    // 0x2a205c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a205cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2060: 0xe6b41878  swc1        $f20, 0x1878($s5)
    ctx->pc = 0x2a2060u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 6264), bits); }
    // 0x2a2064: 0xac62187c  sw          $v0, 0x187C($v1)
    ctx->pc = 0x2a2064u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6268), GPR_U32(ctx, 2));
label_2a2068:
    // 0x2a2068: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2a2068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2a206c: 0x8c621884  lw          $v0, 0x1884($v1)
    ctx->pc = 0x2a206cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C1884u));
    // 0x2a2070: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2070u;
    {
        const bool branch_taken_0x2a2070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2070u;
        // 0x2a2074: 0x3c14004c  lui         $s4, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2070) {
            ctx->pc = 0x2A2084u;
            goto label_2a2084;
        }
    }
    ctx->pc = 0x2A2078u;
    // 0x2a2078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a2078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a207c: 0xe6941880  swc1        $f20, 0x1880($s4)
    ctx->pc = 0x2a207cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 6272), bits); }
    // 0x2a2080: 0xac621884  sw          $v0, 0x1884($v1)
    ctx->pc = 0x2a2080u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6276), GPR_U32(ctx, 2));
label_2a2084:
    // 0x2a2084: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2a2084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2a2088: 0x2473cb28  addiu       $s3, $v1, -0x34D8
    ctx->pc = 0x2a2088u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953768));
    // 0x2a208c: 0x8e620268  lw          $v0, 0x268($s3)
    ctx->pc = 0x2a208cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x66CD90u));
    // 0x2a2090: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A2090u;
    {
        const bool branch_taken_0x2a2090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2090u;
        // 0x2a2094: 0x3c110049  lui         $s1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2090) {
            ctx->pc = 0x2A20D4u;
            goto label_2a20d4;
        }
    }
    ctx->pc = 0x2A2098u;
    // 0x2a2098: 0xc0494ea  jal         func_1253A8
    ctx->pc = 0x2A2098u;
    SET_GPR_U32(ctx, 31, 0x2A20A0u);
    ctx->pc = 0x2A209Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2098u;
    // 0x2a209c: 0x2624a080  addiu       $a0, $s1, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253A8u, 0x2A2098u, 0x2A20A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A20A0u;
label_2a20a0:
    // 0x2a20a0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2A20A0u;
    {
        const bool branch_taken_0x2a20a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a20a0) {
            ctx->pc = 0x2A20A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A20A0u;
            // 0x2a20a4: 0xe6941880  swc1        $f20, 0x1880($s4) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 6272), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A20D8u;
            goto label_2a20d8;
        }
    }
    ctx->pc = 0x2A20A8u;
    // 0x2a20a8: 0x3c0141f8  lui         $at, 0x41F8
    ctx->pc = 0x2a20a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16888 << 16));
    // 0x2a20ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a20acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a20b0: 0x3c014244  lui         $at, 0x4244
    ctx->pc = 0x2a20b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16964 << 16));
    // 0x2a20b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a20b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a20b8: 0xe6c01870  swc1        $f0, 0x1870($s6)
    ctx->pc = 0x2a20b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 6256), bits); }
    // 0x2a20bc: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2a20bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2a20c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a20c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a20c4: 0xe6a11878  swc1        $f1, 0x1878($s5)
    ctx->pc = 0x2a20c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 6264), bits); }
    // 0x2a20c8: 0xe6801880  swc1        $f0, 0x1880($s4)
    ctx->pc = 0x2a20c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 6272), bits); }
    // 0x2a20cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A20CCu;
    {
        const bool branch_taken_0x2a20cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A20D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A20CCu;
        // 0x2a20d0: 0xae600268  sw          $zero, 0x268($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a20cc) {
            ctx->pc = 0x2A20E0u;
            goto label_2a20e0;
        }
    }
    ctx->pc = 0x2A20D4u;
label_2a20d4:
    // 0x2a20d4: 0xe6941880  swc1        $f20, 0x1880($s4)
    ctx->pc = 0x2a20d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 6272), bits); }
label_2a20d8:
    // 0x2a20d8: 0xe6d41870  swc1        $f20, 0x1870($s6)
    ctx->pc = 0x2a20d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 6256), bits); }
    // 0x2a20dc: 0xe6b41878  swc1        $f20, 0x1878($s5)
    ctx->pc = 0x2a20dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 6264), bits); }
label_2a20e0:
    // 0x2a20e0: 0xc6c01870  lwc1        $f0, 0x1870($s6)
    ctx->pc = 0x2a20e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 6256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a20e4: 0x2624a080  addiu       $a0, $s1, -0x5F80
    ctx->pc = 0x2a20e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942848));
    // 0x2a20e8: 0xc6821880  lwc1        $f2, 0x1880($s4)
    ctx->pc = 0x2a20e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 6272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a20ec: 0xc6a11878  lwc1        $f1, 0x1878($s5)
    ctx->pc = 0x2a20ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 6264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a20f0: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a20f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2a20f4: 0x44141800  mfc1        $s4, $f3
    ctx->pc = 0x2a20f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x2a20f8: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a20f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2a20fc: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x2a20fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x2a2100: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a2100u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2a2104: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x2a2104u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x2a2108: 0xc0494ea  jal         func_1253A8
    ctx->pc = 0x2A2108u;
    SET_GPR_U32(ctx, 31, 0x2A2110u);
    ctx->pc = 0x1253A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253A8u, 0x2A2108u, 0x2A2110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2110u;
label_2a2110:
    // 0x2a2110: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2A2110u;
    {
        const bool branch_taken_0x2a2110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2110u;
        // 0x2a2114: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2110) {
            ctx->pc = 0x2A21BCu;
            goto label_2a21bc;
        }
    }
    ctx->pc = 0x2A2118u;
    // 0x2a2118: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2a2118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2a211c: 0x8c422b40  lw          $v0, 0x2B40($v0)
    ctx->pc = 0x2a211cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11072)));
    // 0x2a2120: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2a2120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2124: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A2124u;
    {
        const bool branch_taken_0x2a2124 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A2128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2124u;
        // 0x2a2128: 0x2464a980  addiu       $a0, $v1, -0x5680 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2124) {
            ctx->pc = 0x2A2140u;
            goto label_2a2140;
        }
    }
    ctx->pc = 0x2A212Cu;
    // 0x2a212c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2a212cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a2130: 0x0  nop
    ctx->pc = 0x2a2130u;
    // NOP
    // 0x2a2134: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2a2134u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2a2138: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A2138u;
    {
        const bool branch_taken_0x2a2138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2138) {
            ctx->pc = 0x2A215Cu;
            goto label_2a215c;
        }
    }
    ctx->pc = 0x2A2140u;
label_2a2140:
    // 0x2a2140: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a2140u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2a2144: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a2144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a2148: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a2148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a214c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2a214cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a2150: 0x0  nop
    ctx->pc = 0x2a2150u;
    // NOP
    // 0x2a2154: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2a2154u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2a2158: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2a2158u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2a215c:
    // 0x2a215c: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x2a215cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x2a2160: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x2a2160u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x2a2164: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a2164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2168: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2a2168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a216c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2a216cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2a2170: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2a2170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2a2174: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a2174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a2178: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2a2178u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a217c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x2a217cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2a2180: 0xc4a1a980  lwc1        $f1, -0x5680($a1)
    ctx->pc = 0x2a2180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294945152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2184: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x2a2184u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a2188: 0x0  nop
    ctx->pc = 0x2a2188u;
    // NOP
    // 0x2a218c: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x2A218Cu;
    {
        const bool branch_taken_0x2a218c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a218c) {
            ctx->pc = 0x2A2190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A218Cu;
            // 0x2a2190: 0x8e4312bc  lw          $v1, 0x12BC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4796)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A21C0u;
            goto label_2a21c0;
        }
    }
    ctx->pc = 0x2A2194u;
    // 0x2a2194: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x2a2194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x2a2198: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a2198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a219c: 0x24140080  addiu       $s4, $zero, 0x80
    ctx->pc = 0x2a219cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a21a0: 0x24110040  addiu       $s1, $zero, 0x40
    ctx->pc = 0x2a21a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2a21a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2a21a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a21a8: 0x0  nop
    ctx->pc = 0x2a21a8u;
    // NOP
    // 0x2a21ac: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A21ACu;
    {
        const bool branch_taken_0x2a21ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A21B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A21ACu;
        // 0x2a21b0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a21ac) {
            ctx->pc = 0x2A21BCu;
            goto label_2a21bc;
        }
    }
    ctx->pc = 0x2A21B4u;
    // 0x2a21b4: 0xaca0a980  sw          $zero, -0x5680($a1)
    ctx->pc = 0x2a21b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294945152), GPR_U32(ctx, 0));
    // 0x2a21b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a21b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a21bc:
    // 0x2a21bc: 0x8e4312bc  lw          $v1, 0x12BC($s2)
    ctx->pc = 0x2a21bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4796)));
label_2a21c0:
    // 0x2a21c0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2a21c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a21c4: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2A21C4u;
    {
        const bool branch_taken_0x2a21c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A21C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A21C4u;
        // 0x2a21c8: 0x2c62000c  sltiu       $v0, $v1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a21c4) {
            ctx->pc = 0x2A22A0u;
            goto label_2a22a0;
        }
    }
    ctx->pc = 0x2A21CCu;
    // 0x2a21cc: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2A21CCu;
    {
        const bool branch_taken_0x2a21cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A21D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A21CCu;
        // 0x2a21d0: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a21cc) {
            ctx->pc = 0x2A22A0u;
            goto label_2a22a0;
        }
    }
    ctx->pc = 0x2A21D4u;
    // 0x2a21d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a21d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a21d8: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x2a21d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
    // 0x2a21dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a21dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a21e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a21e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a21e4: 0x800008  jr          $a0
    ctx->pc = 0x2A21E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A21ECu: goto label_2a21ec;
            case 0x2A21F8u: goto label_2a21f8;
            case 0x2A2224u: goto label_2a2224;
            case 0x2A2230u: goto label_2a2230;
            case 0x2A223Cu: goto label_2a223c;
            case 0x2A2248u: goto label_2a2248;
            case 0x2A2254u: goto label_2a2254;
            case 0x2A2260u: goto label_2a2260;
            case 0x2A226Cu: goto label_2a226c;
            case 0x2A2278u: goto label_2a2278;
            case 0x2A2290u: goto label_2a2290;
            case 0x2A22A0u: goto label_2a22a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A21E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A21ECu;
label_2a21ec:
    // 0x2a21ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a21ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a21f0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2A21F0u;
    {
        const bool branch_taken_0x2a21f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A21F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A21F0u;
        // 0x2a21f4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a21f0) {
            ctx->pc = 0x2A2280u;
            goto label_2a2280;
        }
    }
    ctx->pc = 0x2A21F8u;
label_2a21f8:
    // 0x2a21f8: 0xc0b93c4  jal         func_2E4F10
    ctx->pc = 0x2A21F8u;
    SET_GPR_U32(ctx, 31, 0x2A2200u);
    ctx->pc = 0x2A21FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A21F8u;
    // 0x2a21fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F10u, 0x2A21F8u, 0x2A2200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2200u;
label_2a2200:
    // 0x2a2200: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2200u;
    {
        const bool branch_taken_0x2a2200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2200u;
        // 0x2a2204: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2200) {
            ctx->pc = 0x2A2218u;
            goto label_2a2218;
        }
    }
    ctx->pc = 0x2A2208u;
    // 0x2a2208: 0xc0b93c2  jal         func_2E4F08
    ctx->pc = 0x2A2208u;
    SET_GPR_U32(ctx, 31, 0x2A2210u);
    ctx->pc = 0x2A220Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2208u;
    // 0x2a220c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F08u, 0x2A2208u, 0x2A2210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2210u;
label_2a2210:
    // 0x2a2210: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2A2210u;
    {
        const bool branch_taken_0x2a2210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2210) {
            ctx->pc = 0x2A22A0u;
            goto label_2a22a0;
        }
    }
    ctx->pc = 0x2A2218u;
label_2a2218:
    // 0x2a2218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a221c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2A221Cu;
    {
        const bool branch_taken_0x2a221c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A221Cu;
        // 0x2a2220: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a221c) {
            ctx->pc = 0x2A2280u;
            goto label_2a2280;
        }
    }
    ctx->pc = 0x2A2224u;
label_2a2224:
    // 0x2a2224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2228: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2A2228u;
    {
        const bool branch_taken_0x2a2228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2228u;
        // 0x2a222c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2228) {
            ctx->pc = 0x2A2280u;
            goto label_2a2280;
        }
    }
    ctx->pc = 0x2A2230u;
label_2a2230:
    // 0x2a2230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2234: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2A2234u;
    {
        const bool branch_taken_0x2a2234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2234u;
        // 0x2a2238: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2234) {
            ctx->pc = 0x2A2280u;
            goto label_2a2280;
        }
    }
    ctx->pc = 0x2A223Cu;
label_2a223c:
    // 0x2a223c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a223cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2240: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A2240u;
    {
        const bool branch_taken_0x2a2240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2240u;
        // 0x2a2244: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2240) {
            ctx->pc = 0x2A2280u;
            goto label_2a2280;
        }
    }
    ctx->pc = 0x2A2248u;
label_2a2248:
    // 0x2a2248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a224c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2A224Cu;
    {
        const bool branch_taken_0x2a224c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A224Cu;
        // 0x2a2250: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a224c) {
            ctx->pc = 0x2A2280u;
            goto label_2a2280;
        }
    }
    ctx->pc = 0x2A2254u;
label_2a2254:
    // 0x2a2254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2258: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A2258u;
    {
        const bool branch_taken_0x2a2258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2258u;
        // 0x2a225c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2258) {
            ctx->pc = 0x2A2280u;
            goto label_2a2280;
        }
    }
    ctx->pc = 0x2A2260u;
label_2a2260:
    // 0x2a2260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2264: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A2264u;
    {
        const bool branch_taken_0x2a2264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2264u;
        // 0x2a2268: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2264) {
            ctx->pc = 0x2A2280u;
            goto label_2a2280;
        }
    }
    ctx->pc = 0x2A226Cu;
label_2a226c:
    // 0x2a226c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a226cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2270: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A2270u;
    {
        const bool branch_taken_0x2a2270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2270u;
        // 0x2a2274: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2270) {
            ctx->pc = 0x2A2280u;
            goto label_2a2280;
        }
    }
    ctx->pc = 0x2A2278u;
label_2a2278:
    // 0x2a2278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a227c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2a227cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2a2280:
    // 0x2a2280: 0xc0a890a  jal         func_2A2428
    ctx->pc = 0x2A2280u;
    SET_GPR_U32(ctx, 31, 0x2A2288u);
    ctx->pc = 0x2A2284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2280u;
    // 0x2a2284: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2428u, 0x2A2280u, 0x2A2288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2288u;
label_2a2288:
    // 0x2a2288: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2288u;
    {
        const bool branch_taken_0x2a2288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2288) {
            ctx->pc = 0x2A22A0u;
            goto label_2a22a0;
        }
    }
    ctx->pc = 0x2A2290u;
label_2a2290:
    // 0x2a2290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2294: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a2294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a2298: 0xc0a890a  jal         func_2A2428
    ctx->pc = 0x2A2298u;
    SET_GPR_U32(ctx, 31, 0x2A22A0u);
    ctx->pc = 0x2A229Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2298u;
    // 0x2a229c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2428u, 0x2A2298u, 0x2A22A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A22A0u;
label_2a22a0:
    // 0x2a22a0: 0x3c013f36  lui         $at, 0x3F36
    ctx->pc = 0x2a22a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16182 << 16));
    // 0x2a22a4: 0x34210419  ori         $at, $at, 0x419
    ctx->pc = 0x2a22a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1049);
    // 0x2a22a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a22a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a22ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a22acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a22b0: 0x3c013ee3  lui         $at, 0x3EE3
    ctx->pc = 0x2a22b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16099 << 16));
    // 0x2a22b4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2a22b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2a22b8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2a22b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a22bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2a22bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a22c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a22c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a22c4: 0xc0a88be  jal         func_2A22F8
    ctx->pc = 0x2A22C4u;
    SET_GPR_U32(ctx, 31, 0x2A22CCu);
    ctx->pc = 0x2A22C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A22C4u;
    // 0x2a22c8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A22F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A22F8u, 0x2A22C4u, 0x2A22CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A22CCu;
label_2a22cc:
    // 0x2a22cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a22ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a22d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a22d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a22d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a22d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a22d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a22d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a22dc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2a22dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a22e0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2a22e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a22e4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2a22e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a22e8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2a22e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a22ec: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2a22ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a22f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A22F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A22F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A22F0u;
        // 0x2a22f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A22F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A22F8u;
}
