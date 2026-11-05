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

// Function: sub_002DAA40
// Address: 0x2daa40 - 0x2dab40
void sub_002DAA40_0x2daa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAA40_0x2daa40");
#endif

    switch (ctx->pc) {
        case 0x2daa78u: goto label_2daa78;
        case 0x2daae8u: goto label_2daae8;
        case 0x2daaf8u: goto label_2daaf8;
        case 0x2dab04u: goto label_2dab04;
        case 0x2dab20u: goto label_2dab20;
        default: break;
    }

    ctx->pc = 0x2daa40u;

    // 0x2daa40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2daa40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2daa44: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2daa44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2daa48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2daa48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2daa4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2daa4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2daa50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2daa50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2daa54: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2daa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2daa58: 0x14a20031  bne         $a1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2DAA58u;
    {
        const bool branch_taken_0x2daa58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DAA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAA58u;
        // 0x2daa5c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daa58) {
            ctx->pc = 0x2DAB20u;
            goto label_2dab20;
        }
    }
    ctx->pc = 0x2DAA60u;
    // 0x2daa60: 0x1080002f  beqz        $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2DAA60u;
    {
        const bool branch_taken_0x2daa60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAA60u;
        // 0x2daa64: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daa60) {
            ctx->pc = 0x2DAB20u;
            goto label_2dab20;
        }
    }
    ctx->pc = 0x2DAA68u;
    // 0x2daa68: 0x2412007f  addiu       $s2, $zero, 0x7F
    ctx->pc = 0x2daa68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2daa6c: 0x2484b0d8  addiu       $a0, $a0, -0x4F28
    ctx->pc = 0x2daa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947032));
    // 0x2daa70: 0xc09f210  jal         func_27C840
    ctx->pc = 0x2DAA70u;
    SET_GPR_U32(ctx, 31, 0x2DAA78u);
    ctx->pc = 0x2DAA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAA70u;
    // 0x2daa74: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C840u, 0x2DAA70u, 0x2DAA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAA78u;
label_2daa78:
    // 0x2daa78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2daa78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2daa7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2daa7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daa80: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2daa80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x2daa84: 0x2442dce0  addiu       $v0, $v0, -0x2320
    ctx->pc = 0x2daa84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2daa88: 0x3c080058  lui         $t0, 0x58
    ctx->pc = 0x2daa88u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)88 << 16));
    // 0x2daa8c: 0xe44063f4  swc1        $f0, 0x63F4($v0)
    ctx->pc = 0x2daa8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5940D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5940D4u, _value); } while (0); }
    // 0x2daa90: 0x2508b0e0  addiu       $t0, $t0, -0x4F20
    ctx->pc = 0x2daa90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294947040));
    // 0x2daa94: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x2daa94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
    // 0x2daa98: 0xe50063f4  swc1        $f0, 0x63F4($t0)
    ctx->pc = 0x2daa98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5814D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5814D4u, _value); } while (0); }
    // 0x2daa9c: 0x24c614e0  addiu       $a2, $a2, 0x14E0
    ctx->pc = 0x2daa9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5344));
    // 0x2daaa0: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x2daaa0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
    // 0x2daaa4: 0xe4c063f4  swc1        $f0, 0x63F4($a2)
    ctx->pc = 0x2daaa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5878D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878D4u, _value); } while (0); }
    // 0x2daaa8: 0x24e778e0  addiu       $a3, $a3, 0x78E0
    ctx->pc = 0x2daaa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 30944));
    // 0x2daaac: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x2daaacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x2daab0: 0xe4e063f4  swc1        $f0, 0x63F4($a3)
    ctx->pc = 0x2daab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x58DCD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58DCD4u, _value); } while (0); }
    // 0x2daab4: 0x24843e28  addiu       $a0, $a0, 0x3E28
    ctx->pc = 0x2daab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15912));
    // 0x2daab8: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x2daab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x2daabc: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x2daabcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x2daac0: 0xac4463f8  sw          $a0, 0x63F8($v0)
    ctx->pc = 0x2daac0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5940D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5940D8u, _value); } while (0);
    // 0x2daac4: 0x246340e0  addiu       $v1, $v1, 0x40E0
    ctx->pc = 0x2daac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16608));
    // 0x2daac8: 0x24a53e18  addiu       $a1, $a1, 0x3E18
    ctx->pc = 0x2daac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15896));
    // 0x2daacc: 0xac650a04  sw          $a1, 0xA04($v1)
    ctx->pc = 0x2daaccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x594AE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x594AE4u, _value); } while (0);
    // 0x2daad0: 0x24710004  addiu       $s1, $v1, 0x4
    ctx->pc = 0x2daad0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2daad4: 0xad0463f8  sw          $a0, 0x63F8($t0)
    ctx->pc = 0x2daad4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5814D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5814D8u, _value); } while (0);
    // 0x2daad8: 0xacc463f8  sw          $a0, 0x63F8($a2)
    ctx->pc = 0x2daad8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5878D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878D8u, _value); } while (0);
    // 0x2daadc: 0xace463f8  sw          $a0, 0x63F8($a3)
    ctx->pc = 0x2daadcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x58DCD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58DCD8u, _value); } while (0);
    // 0x2daae0: 0x2630000c  addiu       $s0, $s1, 0xC
    ctx->pc = 0x2daae0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2daae4: 0x0  nop
    ctx->pc = 0x2daae4u;
    // NOP
label_2daae8:
    // 0x2daae8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2daae8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2daaec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2daaecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daaf0: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x2DAAF0u;
    SET_GPR_U32(ctx, 31, 0x2DAAF8u);
    ctx->pc = 0x2DAAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAAF0u;
    // 0x2daaf4: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2DAAF0u, 0x2DAAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAAF8u;
label_2daaf8:
    // 0x2daaf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2daaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daafc: 0xc0d73a6  jal         func_35CE98
    ctx->pc = 0x2DAAFCu;
    SET_GPR_U32(ctx, 31, 0x2DAB04u);
    ctx->pc = 0x2DAB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAAFCu;
    // 0x2dab00: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE98u, 0x2DAAFCu, 0x2DAB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAB04u;
label_2dab04:
    // 0x2dab04: 0x1653fff8  bne         $s2, $s3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2DAB04u;
    {
        const bool branch_taken_0x2dab04 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x2DAB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAB04u;
        // 0x2dab08: 0x2630000c  addiu       $s0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dab04) {
            ctx->pc = 0x2DAAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2daae8;
        }
    }
    ctx->pc = 0x2DAB0Cu;
    // 0x2dab0c: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x2dab0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x2dab10: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2dab10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2dab14: 0x24844ae8  addiu       $a0, $a0, 0x4AE8
    ctx->pc = 0x2dab14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19176));
    // 0x2dab18: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2DAB18u;
    SET_GPR_U32(ctx, 31, 0x2DAB20u);
    ctx->pc = 0x2DAB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAB18u;
    // 0x2dab1c: 0x24a51638  addiu       $a1, $a1, 0x1638 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2DAB18u, 0x2DAB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAB20u;
label_2dab20:
    // 0x2dab20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dab20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dab24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2dab24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dab28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2dab28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dab2c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2dab2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2dab30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dab30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dab34: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAB34u;
        // 0x2dab38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAB34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAB3Cu;
    // 0x2dab3c: 0x0  nop
    ctx->pc = 0x2dab3cu;
    // NOP
    ctx->pc = 0x2dab40u;
}
