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

// Function: sub_0014E118
// Address: 0x14e118 - 0x14e188
void sub_0014E118_0x14e118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E118_0x14e118");
#endif

    switch (ctx->pc) {
        case 0x14e15cu: goto label_14e15c;
        case 0x14e168u: goto label_14e168;
        case 0x14e174u: goto label_14e174;
        default: break;
    }

    ctx->pc = 0x14e118u;

    // 0x14e118: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14e118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14e11c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x14e11cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x14e120: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14e120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14e124: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x14e124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x14e128: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14e128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14e12c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14e12cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e130: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14e130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14e134: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x14e134u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14e138: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x14e138u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x14e13c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14e13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e140: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x14e140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14e144: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14e144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14e148: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14e148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14e14c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14e150: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14e150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14e154: 0xc044084  jal         func_110210
    ctx->pc = 0x14E154u;
    SET_GPR_U32(ctx, 31, 0x14E15Cu);
    ctx->pc = 0x14E158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E154u;
    // 0x14e158: 0x8c64020c  lw          $a0, 0x20C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110210u, 0x14E154u, 0x14E15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E15Cu;
label_14e15c:
    // 0x14e15c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e160: 0xc053b44  jal         func_14ED10
    ctx->pc = 0x14E160u;
    SET_GPR_U32(ctx, 31, 0x14E168u);
    ctx->pc = 0x14E164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E160u;
    // 0x14e164: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ED10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ED10u, 0x14E160u, 0x14E168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E168u;
label_14e168:
    // 0x14e168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e16c: 0xc053b82  jal         func_14EE08
    ctx->pc = 0x14E16Cu;
    SET_GPR_U32(ctx, 31, 0x14E174u);
    ctx->pc = 0x14E170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E16Cu;
    // 0x14e170: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE08u, 0x14E16Cu, 0x14E174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E174u;
label_14e174:
    // 0x14e174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14e174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e178: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14e178u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14e17c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14e17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e180: 0x3e00008  jr          $ra
    ctx->pc = 0x14E180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E180u;
        // 0x14e184: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E188u;
}
