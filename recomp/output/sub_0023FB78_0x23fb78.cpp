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

// Function: sub_0023FB78
// Address: 0x23fb78 - 0x23fc60
void sub_0023FB78_0x23fb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FB78_0x23fb78");
#endif

    switch (ctx->pc) {
        case 0x23fbb4u: goto label_23fbb4;
        case 0x23fbbcu: goto label_23fbbc;
        case 0x23fbe8u: goto label_23fbe8;
        case 0x23fbf8u: goto label_23fbf8;
        case 0x23fc04u: goto label_23fc04;
        case 0x23fc20u: goto label_23fc20;
        case 0x23fc2cu: goto label_23fc2c;
        case 0x23fc40u: goto label_23fc40;
        default: break;
    }

    ctx->pc = 0x23fb78u;

    // 0x23fb78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23fb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23fb7c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x23fb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23fb80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23fb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23fb84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23fb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23fb88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23fb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23fb8c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23fb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23fb90: 0x14a2002b  bne         $a1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x23FB90u;
    {
        const bool branch_taken_0x23fb90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x23FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB90u;
        // 0x23fb94: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fb90) {
            ctx->pc = 0x23FC40u;
            goto label_23fc40;
        }
    }
    ctx->pc = 0x23FB98u;
    // 0x23fb98: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x23FB98u;
    {
        const bool branch_taken_0x23fb98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB98u;
        // 0x23fb9c: 0x3c10004a  lui         $s0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fb98) {
            ctx->pc = 0x23FC40u;
            goto label_23fc40;
        }
    }
    ctx->pc = 0x23FBA0u;
    // 0x23fba0: 0x24110a8b  addiu       $s1, $zero, 0xA8B
    ctx->pc = 0x23fba0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2699));
    // 0x23fba4: 0x261045c0  addiu       $s0, $s0, 0x45C0
    ctx->pc = 0x23fba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17856));
    // 0x23fba8: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x23fba8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23fbac: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x23FBACu;
    SET_GPR_U32(ctx, 31, 0x23FBB4u);
    ctx->pc = 0x23FBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FBACu;
    // 0x23fbb0: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x23FBACu, 0x23FBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FBB4u;
label_23fbb4:
    // 0x23fbb4: 0xc089a4a  jal         func_226928
    ctx->pc = 0x23FBB4u;
    SET_GPR_U32(ctx, 31, 0x23FBBCu);
    ctx->pc = 0x23FBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FBB4u;
    // 0x23fbb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226928u, 0x23FBB4u, 0x23FBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FBBCu;
label_23fbbc:
    // 0x23fbbc: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x23fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x23fbc0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x23fbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x23fbc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23fbc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23fbc8: 0x24624680  addiu       $v0, $v1, 0x4680
    ctx->pc = 0x23fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 18048));
    // 0x23fbcc: 0xac604680  sw          $zero, 0x4680($v1)
    ctx->pc = 0x23fbccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A4680u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A4680u, _value); } while (0);
    // 0x23fbd0: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x23fbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x23fbd4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x23fbd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4A4684u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A4684u, _value); } while (0); }
    // 0x23fbd8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x23fbd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A468Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A468Cu, _value); } while (0);
    // 0x23fbdc: 0x24844690  addiu       $a0, $a0, 0x4690
    ctx->pc = 0x23fbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18064));
    // 0x23fbe0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x23FBE0u;
    SET_GPR_U32(ctx, 31, 0x23FBE8u);
    ctx->pc = 0x23FBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FBE0u;
    // 0x23fbe4: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x23FBE0u, 0x23FBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FBE8u;
label_23fbe8:
    // 0x23fbe8: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x23fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x23fbec: 0x245346a0  addiu       $s3, $v0, 0x46A0
    ctx->pc = 0x23fbecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 18080));
    // 0x23fbf0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x23fbf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fbf4: 0x0  nop
    ctx->pc = 0x23fbf4u;
    // NOP
label_23fbf8:
    // 0x23fbf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23fbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fbfc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x23FBFCu;
    SET_GPR_U32(ctx, 31, 0x23FC04u);
    ctx->pc = 0x23FC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FBFCu;
    // 0x23fc00: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x23FBFCu, 0x23FC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FC04u;
label_23fc04:
    // 0x23fc04: 0x0  nop
    ctx->pc = 0x23fc04u;
    // NOP
    // 0x23fc08: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23FC08u;
    {
        const bool branch_taken_0x23fc08 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x23FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC08u;
        // 0x23fc0c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc08) {
            ctx->pc = 0x23FBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fbf8;
        }
    }
    ctx->pc = 0x23FC10u;
    // 0x23fc10: 0x3402a8c0  ori         $v0, $zero, 0xA8C0
    ctx->pc = 0x23fc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43200);
    // 0x23fc14: 0x24110383  addiu       $s1, $zero, 0x383
    ctx->pc = 0x23fc14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 899));
    // 0x23fc18: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x23fc18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23fc1c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x23fc1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23fc20:
    // 0x23fc20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23fc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fc24: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x23FC24u;
    SET_GPR_U32(ctx, 31, 0x23FC2Cu);
    ctx->pc = 0x23FC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FC24u;
    // 0x23fc28: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x23FC24u, 0x23FC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FC2Cu;
label_23fc2c:
    // 0x23fc2c: 0x0  nop
    ctx->pc = 0x23fc2cu;
    // NOP
    // 0x23fc30: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23FC30u;
    {
        const bool branch_taken_0x23fc30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x23FC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC30u;
        // 0x23fc34: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc30) {
            ctx->pc = 0x23FC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fc20;
        }
    }
    ctx->pc = 0x23FC38u;
    // 0x23fc38: 0xc0f7d0a  jal         func_3DF428
    ctx->pc = 0x23FC38u;
    SET_GPR_U32(ctx, 31, 0x23FC40u);
    ctx->pc = 0x23FC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FC38u;
    // 0x23fc3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF428u, 0x23FC38u, 0x23FC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FC40u;
label_23fc40:
    // 0x23fc40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23fc40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fc44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23fc44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23fc48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23fc48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fc4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23fc4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23fc50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23fc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fc54: 0x3e00008  jr          $ra
    ctx->pc = 0x23FC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC54u;
        // 0x23fc58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FC5Cu;
    // 0x23fc5c: 0x0  nop
    ctx->pc = 0x23fc5cu;
    // NOP
    ctx->pc = 0x23fc60u;
}
