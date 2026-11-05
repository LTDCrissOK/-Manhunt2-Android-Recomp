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

// Function: sub_00153418
// Address: 0x153418 - 0x1534c8
void sub_00153418_0x153418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153418_0x153418");
#endif

    switch (ctx->pc) {
        case 0x153468u: goto label_153468;
        case 0x153474u: goto label_153474;
        case 0x153484u: goto label_153484;
        case 0x153490u: goto label_153490;
        case 0x1534a0u: goto label_1534a0;
        case 0x1534b0u: goto label_1534b0;
        default: break;
    }

    ctx->pc = 0x153418u;

    // 0x153418: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x153418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15341c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15341cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x153420: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x153420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x153424: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x153424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x153428: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x153428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15342c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15342cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x153430: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x153430u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x153434: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x153434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x153438: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x153438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x15343c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x15343cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x153440: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x153440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153444: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x153444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x153448: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x153448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x15344c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15344cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x153450: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x153450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x153454: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x153454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x153458: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x153458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15345c: 0x8c90020c  lw          $s0, 0x20C($a0)
    ctx->pc = 0x15345cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x153460: 0xc04547e  jal         func_1151F8
    ctx->pc = 0x153460u;
    SET_GPR_U32(ctx, 31, 0x153468u);
    ctx->pc = 0x153464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153460u;
    // 0x153464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1151F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1151F8u, 0x153460u, 0x153468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153468u;
label_153468:
    // 0x153468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15346c: 0xc044084  jal         func_110210
    ctx->pc = 0x15346Cu;
    SET_GPR_U32(ctx, 31, 0x153474u);
    ctx->pc = 0x153470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15346Cu;
    // 0x153470: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110210u, 0x15346Cu, 0x153474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153474u;
label_153474:
    // 0x153474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x153474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153478: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x153478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15347c: 0xc04d91a  jal         func_136468
    ctx->pc = 0x15347Cu;
    SET_GPR_U32(ctx, 31, 0x153484u);
    ctx->pc = 0x153480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15347Cu;
    // 0x153480: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136468u, 0x15347Cu, 0x153484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153484u;
label_153484:
    // 0x153484: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x153484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153488: 0xc04d914  jal         func_136450
    ctx->pc = 0x153488u;
    SET_GPR_U32(ctx, 31, 0x153490u);
    ctx->pc = 0x15348Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153488u;
    // 0x15348c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136450u, 0x153488u, 0x153490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153490u;
label_153490:
    // 0x153490: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x153490u;
    {
        const bool branch_taken_0x153490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153490u;
        // 0x153494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153490) {
            ctx->pc = 0x1534B0u;
            goto label_1534b0;
        }
    }
    ctx->pc = 0x153498u;
    // 0x153498: 0xc04398a  jal         func_10E628
    ctx->pc = 0x153498u;
    SET_GPR_U32(ctx, 31, 0x1534A0u);
    ctx->pc = 0x15349Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153498u;
    // 0x15349c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E628u, 0x153498u, 0x1534A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1534A0u;
label_1534a0:
    // 0x1534a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1534a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1534a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1534a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1534a8: 0xc04d91a  jal         func_136468
    ctx->pc = 0x1534A8u;
    SET_GPR_U32(ctx, 31, 0x1534B0u);
    ctx->pc = 0x1534ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1534A8u;
    // 0x1534ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136468u, 0x1534A8u, 0x1534B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1534B0u;
label_1534b0:
    // 0x1534b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1534b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1534b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1534b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1534b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1534b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1534bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1534bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1534c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1534C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1534C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1534C0u;
        // 0x1534c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1534C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1534C8u;
}
