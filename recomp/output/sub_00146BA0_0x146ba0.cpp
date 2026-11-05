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

// Function: sub_00146BA0
// Address: 0x146ba0 - 0x146cb0
void sub_00146BA0_0x146ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146BA0_0x146ba0");
#endif

    switch (ctx->pc) {
        case 0x146bd4u: goto label_146bd4;
        case 0x146be4u: goto label_146be4;
        case 0x146bf8u: goto label_146bf8;
        case 0x146c10u: goto label_146c10;
        case 0x146c20u: goto label_146c20;
        case 0x146c44u: goto label_146c44;
        case 0x146c60u: goto label_146c60;
        case 0x146c68u: goto label_146c68;
        case 0x146c74u: goto label_146c74;
        case 0x146c84u: goto label_146c84;
        case 0x146c90u: goto label_146c90;
        default: break;
    }

    ctx->pc = 0x146ba0u;

    // 0x146ba0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x146ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x146ba4: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x146ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x146ba8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x146ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x146bac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x146bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146bb0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x146bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x146bb4: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x146bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x146bb8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x146bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x146bbc: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x146bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x146bc0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x146bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x146bc4: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x146BC4u;
    {
        const bool branch_taken_0x146bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146BC4u;
        // 0x146bc8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146bc4) {
            ctx->pc = 0x146C90u;
            goto label_146c90;
        }
    }
    ctx->pc = 0x146BCCu;
    // 0x146bcc: 0xc0f6784  jal         func_3D9E10
    ctx->pc = 0x146BCCu;
    SET_GPR_U32(ctx, 31, 0x146BD4u);
    ctx->pc = 0x146BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146BCCu;
    // 0x146bd0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9E10u, 0x146BCCu, 0x146BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146BD4u;
label_146bd4:
    // 0x146bd4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x146bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146bd8: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x146bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x146bdc: 0xc0f67a0  jal         func_3D9E80
    ctx->pc = 0x146BDCu;
    SET_GPR_U32(ctx, 31, 0x146BE4u);
    ctx->pc = 0x146BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146BDCu;
    // 0x146be0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9E80u, 0x146BDCu, 0x146BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146BE4u;
label_146be4:
    // 0x146be4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x146be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x146be8: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x146BE8u;
    {
        const bool branch_taken_0x146be8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x146BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146BE8u;
        // 0x146bec: 0x27b30030  addiu       $s3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146be8) {
            ctx->pc = 0x146C50u;
            goto label_146c50;
        }
    }
    ctx->pc = 0x146BF0u;
    // 0x146bf0: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x146bf0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x146bf4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x146bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_146bf8:
    // 0x146bf8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x146bf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146bfc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x146BFCu;
    {
        const bool branch_taken_0x146bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146BFCu;
        // 0x146c00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146bfc) {
            ctx->pc = 0x146C08u;
            goto label_146c08;
        }
    }
    ctx->pc = 0x146C04u;
    // 0x146c04: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x146c04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_146c08:
    // 0x146c08: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x146C08u;
    SET_GPR_U32(ctx, 31, 0x146C10u);
    ctx->pc = 0x146C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146C08u;
    // 0x146c0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x146C08u, 0x146C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146C10u;
label_146c10:
    // 0x146c10: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x146c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x146c14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x146c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146c18: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x146C18u;
    SET_GPR_U32(ctx, 31, 0x146C20u);
    ctx->pc = 0x146C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146C18u;
    // 0x146c1c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x146C18u, 0x146C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146C20u;
label_146c20:
    // 0x146c20: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x146c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x146c24: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x146c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x146c28: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x146c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x146c2c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x146c2cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x146c30: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x146c30u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x146c34: 0x4604231c  madd.s      $f12, $f4, $f4
    ctx->pc = 0x146c34u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x146c38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x146c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146c3c: 0xc0f696e  jal         func_3DA5B8
    ctx->pc = 0x146C3Cu;
    SET_GPR_U32(ctx, 31, 0x146C44u);
    ctx->pc = 0x146C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146C3Cu;
    // 0x146c40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA5B8u, 0x146C3Cu, 0x146C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146C44u;
label_146c44:
    // 0x146c44: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x146c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x146c48: 0x5c40ffeb  bgtzl       $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x146C48u;
    {
        const bool branch_taken_0x146c48 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x146c48) {
            ctx->pc = 0x146C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146C48u;
            // 0x146c4c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146bf8;
        }
    }
    ctx->pc = 0x146C50u;
label_146c50:
    // 0x146c50: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x146c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x146c54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x146C54u;
    {
        const bool branch_taken_0x146c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146C54u;
        // 0x146c58: 0x3c100049  lui         $s0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146c54) {
            ctx->pc = 0x146C68u;
            goto label_146c68;
        }
    }
    ctx->pc = 0x146C5Cu;
    // 0x146c5c: 0x0  nop
    ctx->pc = 0x146c5cu;
    // NOP
label_146c60:
    // 0x146c60: 0xc0f6230  jal         func_3D88C0
    ctx->pc = 0x146C60u;
    SET_GPR_U32(ctx, 31, 0x146C68u);
    ctx->pc = 0x146C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146C60u;
    // 0x146c64: 0x2604bd38  addiu       $a0, $s0, -0x42C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D88C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D88C0u, 0x146C60u, 0x146C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146C68u;
label_146c68:
    // 0x146c68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x146c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146c6c: 0xc0f69b4  jal         func_3DA6D0
    ctx->pc = 0x146C6Cu;
    SET_GPR_U32(ctx, 31, 0x146C74u);
    ctx->pc = 0x146C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146C6Cu;
    // 0x146c70: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA6D0u, 0x146C6Cu, 0x146C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146C74u;
label_146c74:
    // 0x146c74: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x146C74u;
    {
        const bool branch_taken_0x146c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146C74u;
        // 0x146c78: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146c74) {
            ctx->pc = 0x146C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146c60;
        }
    }
    ctx->pc = 0x146C7Cu;
    // 0x146c7c: 0xc0f69d6  jal         func_3DA758
    ctx->pc = 0x146C7Cu;
    SET_GPR_U32(ctx, 31, 0x146C84u);
    ctx->pc = 0x146C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146C7Cu;
    // 0x146c80: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA758u, 0x146C7Cu, 0x146C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146C84u;
label_146c84:
    // 0x146c84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x146c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146c88: 0xc0f6774  jal         func_3D9DD0
    ctx->pc = 0x146C88u;
    SET_GPR_U32(ctx, 31, 0x146C90u);
    ctx->pc = 0x146C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146C88u;
    // 0x146c8c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9DD0u, 0x146C88u, 0x146C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146C90u;
label_146c90:
    // 0x146c90: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x146c90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x146c94: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x146c94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x146c98: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x146c98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x146c9c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x146c9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x146ca0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x146ca0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x146ca4: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x146ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x146ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x146CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146CA8u;
        // 0x146cac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146CB0u;
}
