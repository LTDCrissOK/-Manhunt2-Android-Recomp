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

// Function: sub_00142EF8
// Address: 0x142ef8 - 0x142f88
void sub_00142EF8_0x142ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142EF8_0x142ef8");
#endif

    switch (ctx->pc) {
        case 0x142f44u: goto label_142f44;
        case 0x142f50u: goto label_142f50;
        case 0x142f64u: goto label_142f64;
        case 0x142f70u: goto label_142f70;
        default: break;
    }

    ctx->pc = 0x142ef8u;

    // 0x142ef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x142ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x142efc: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x142efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x142f00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x142f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x142f04: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x142f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x142f08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x142f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x142f0c: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x142f0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x142f10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x142f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x142f14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x142f14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142f18: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x142f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x142f1c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x142f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x142f20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x142f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142f24: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x142f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x142f28: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x142f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x142f2c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x142f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x142f30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x142f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x142f34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x142f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x142f38: 0x8c72020c  lw          $s2, 0x20C($v1)
    ctx->pc = 0x142f38u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x142f3c: 0xc04398a  jal         func_10E628
    ctx->pc = 0x142F3Cu;
    SET_GPR_U32(ctx, 31, 0x142F44u);
    ctx->pc = 0x142F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142F3Cu;
    // 0x142f40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E628u, 0x142F3Cu, 0x142F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142F44u;
label_142f44:
    // 0x142f44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142f48: 0xc04d914  jal         func_136450
    ctx->pc = 0x142F48u;
    SET_GPR_U32(ctx, 31, 0x142F50u);
    ctx->pc = 0x142F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142F48u;
    // 0x142f4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136450u, 0x142F48u, 0x142F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142F50u;
label_142f50:
    // 0x142f50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x142F50u;
    {
        const bool branch_taken_0x142f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F50u;
        // 0x142f54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142f50) {
            ctx->pc = 0x142F64u;
            goto label_142f64;
        }
    }
    ctx->pc = 0x142F58u;
    // 0x142f58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142f5c: 0xc04d91a  jal         func_136468
    ctx->pc = 0x142F5Cu;
    SET_GPR_U32(ctx, 31, 0x142F64u);
    ctx->pc = 0x142F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142F5Cu;
    // 0x142f60: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136468u, 0x142F5Cu, 0x142F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142F64u;
label_142f64:
    // 0x142f64: 0x8e250ab0  lw          $a1, 0xAB0($s1)
    ctx->pc = 0x142f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2736)));
    // 0x142f68: 0xc043e76  jal         func_10F9D8
    ctx->pc = 0x142F68u;
    SET_GPR_U32(ctx, 31, 0x142F70u);
    ctx->pc = 0x142F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142F68u;
    // 0x142f6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F9D8u, 0x142F68u, 0x142F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142F70u;
label_142f70:
    // 0x142f70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x142f70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142f74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x142f74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x142f78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x142f78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142f7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x142f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x142f80: 0x3e00008  jr          $ra
    ctx->pc = 0x142F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F80u;
        // 0x142f84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142F88u;
}
