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

// Function: sub_0016AA00
// Address: 0x16aa00 - 0x16aac8
void sub_0016AA00_0x16aa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AA00_0x16aa00");
#endif

    switch (ctx->pc) {
        case 0x16aa28u: goto label_16aa28;
        case 0x16aa58u: goto label_16aa58;
        case 0x16aa60u: goto label_16aa60;
        case 0x16aa80u: goto label_16aa80;
        case 0x16aa88u: goto label_16aa88;
        case 0x16aaa8u: goto label_16aaa8;
        default: break;
    }

    ctx->pc = 0x16aa00u;

    // 0x16aa00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16aa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16aa04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16aa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16aa08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16aa08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aa0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16aa0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16aa10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16aa10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16aa14: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16aa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16aa18: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x16aa18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16aa1c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x16aa1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x16aa20: 0xc05abc8  jal         func_16AF20
    ctx->pc = 0x16AA20u;
    SET_GPR_U32(ctx, 31, 0x16AA28u);
    ctx->pc = 0x16AA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AA20u;
    // 0x16aa24: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AF20u, 0x16AA20u, 0x16AA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AA28u;
label_16aa28:
    // 0x16aa28: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x16aa28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x16aa2c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x16aa2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16aa30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16aa30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aa34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16aa34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aa38: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x16aa38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x16aa3c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x16aa3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aa40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16aa40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x16aa44: 0xac71000c  sw          $s1, 0xC($v1)
    ctx->pc = 0x16aa44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 17));
    // 0x16aa48: 0xac710010  sw          $s1, 0x10($v1)
    ctx->pc = 0x16aa48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 17));
    // 0x16aa4c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x16aa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x16aa50: 0xc05a926  jal         func_16A498
    ctx->pc = 0x16AA50u;
    SET_GPR_U32(ctx, 31, 0x16AA58u);
    ctx->pc = 0x16AA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AA50u;
    // 0x16aa54: 0xac600018  sw          $zero, 0x18($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A498u, 0x16AA50u, 0x16AA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AA58u;
label_16aa58:
    // 0x16aa58: 0xc05abc8  jal         func_16AF20
    ctx->pc = 0x16AA58u;
    SET_GPR_U32(ctx, 31, 0x16AA60u);
    ctx->pc = 0x16AA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AA58u;
    // 0x16aa5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AF20u, 0x16AA58u, 0x16AA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AA60u;
label_16aa60:
    // 0x16aa60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16aa60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aa64: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16aa64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x16aa68: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x16aa68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aa6c: 0xac71000c  sw          $s1, 0xC($v1)
    ctx->pc = 0x16aa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 17));
    // 0x16aa70: 0xac720018  sw          $s2, 0x18($v1)
    ctx->pc = 0x16aa70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 18));
    // 0x16aa74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16aa74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aa78: 0xc05a926  jal         func_16A498
    ctx->pc = 0x16AA78u;
    SET_GPR_U32(ctx, 31, 0x16AA80u);
    ctx->pc = 0x16AA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AA78u;
    // 0x16aa7c: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A498u, 0x16AA78u, 0x16AA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AA80u;
label_16aa80:
    // 0x16aa80: 0xc05abc8  jal         func_16AF20
    ctx->pc = 0x16AA80u;
    SET_GPR_U32(ctx, 31, 0x16AA88u);
    ctx->pc = 0x16AA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AA80u;
    // 0x16aa84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AF20u, 0x16AA80u, 0x16AA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AA88u;
label_16aa88:
    // 0x16aa88: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16aa88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aa8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16aa8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aa90: 0xac710010  sw          $s1, 0x10($v1)
    ctx->pc = 0x16aa90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 17));
    // 0x16aa94: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16aa94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x16aa98: 0xac720018  sw          $s2, 0x18($v1)
    ctx->pc = 0x16aa98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 18));
    // 0x16aa9c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x16aa9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aaa0: 0xc05a926  jal         func_16A498
    ctx->pc = 0x16AAA0u;
    SET_GPR_U32(ctx, 31, 0x16AAA8u);
    ctx->pc = 0x16AAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AAA0u;
    // 0x16aaa4: 0xac710004  sw          $s1, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A498u, 0x16AAA0u, 0x16AAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AAA8u;
label_16aaa8:
    // 0x16aaa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16aaa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16aaac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16aaacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16aab0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16aab0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16aab4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16aab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16aab8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x16aab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16aabc: 0x3e00008  jr          $ra
    ctx->pc = 0x16AABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AABCu;
        // 0x16aac0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AAC4u;
    // 0x16aac4: 0x0  nop
    ctx->pc = 0x16aac4u;
    // NOP
    ctx->pc = 0x16aac8u;
}
