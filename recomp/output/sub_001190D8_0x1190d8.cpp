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

// Function: sub_001190D8
// Address: 0x1190d8 - 0x119268
void sub_001190D8_0x1190d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001190D8_0x1190d8");
#endif

    switch (ctx->pc) {
        case 0x1190e8u: goto label_1190e8;
        case 0x119144u: goto label_119144;
        case 0x119188u: goto label_119188;
        case 0x1191f4u: goto label_1191f4;
        default: break;
    }

    ctx->pc = 0x1190d8u;

    // 0x1190d8: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1190d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1190dc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1190dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1190e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1190E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1190E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190E0u;
        // 0x1190e4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1190E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1190E8u;
label_1190e8:
    // 0x1190e8: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1190e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1190ec: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1190ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1190f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1190f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1190f4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1190f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1190f8: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1190f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1190fc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1190fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x119100: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x119100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119104: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x119104u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x119108: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x119108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x11910c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x11910cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x119110: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x119110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119114: 0xa0600010  sb          $zero, 0x10($v1)
    ctx->pc = 0x119114u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x119118: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x119118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x11911c: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x11911cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x119120: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x119120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119124: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x119124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x119128: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x119128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x11912c: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x11912cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x119130: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x119130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119134: 0xac650024  sw          $a1, 0x24($v1)
    ctx->pc = 0x119134u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 5));
    // 0x119138: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x119138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x11913c: 0x3e00008  jr          $ra
    ctx->pc = 0x11913Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11913Cu;
        // 0x119140: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11913Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119144u;
label_119144:
    // 0x119144: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x119144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119148: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x119148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11914c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x11914cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x119150: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x119150u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x119154: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x119154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119158: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x119158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x11915c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x11915cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119160: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x119160u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x119164: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x119164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119168: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x119168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x11916c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x11916cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119170: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x119170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x119174: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x119174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119178: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x119178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x11917c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x11917cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119180: 0x3e00008  jr          $ra
    ctx->pc = 0x119180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119180u;
        // 0x119184: 0xa0600018  sb          $zero, 0x18($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 24), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119188u;
label_119188:
    // 0x119188: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x119188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x11918c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11918cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x119190: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x119190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x119194: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x119194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x119198: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x119198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x11919c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x11919cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1191a0: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1191a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1191a4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1191a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1191a8: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1191a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1191ac: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1191acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1191b0: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1191b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1191b4: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x1191b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x1191b8: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1191b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1191bc: 0xa0400014  sb          $zero, 0x14($v0)
    ctx->pc = 0x1191bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x1191c0: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1191c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1191c4: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x1191c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x1191c8: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1191c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1191cc: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1191ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1191d0: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1191d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1191d4: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1191d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x1191d8: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1191d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1191dc: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1191dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x1191e0: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1191e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1191e4: 0xac65002c  sw          $a1, 0x2C($v1)
    ctx->pc = 0x1191e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 5));
    // 0x1191e8: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1191e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1191ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1191ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1191F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1191ECu;
        // 0x1191f0: 0xac400030  sw          $zero, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1191ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1191F4u;
label_1191f4:
    // 0x1191f4: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1191f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1191f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1191f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1191fc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1191fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x119200: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x119200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x119204: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x119204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119208: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x119208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x11920c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x11920cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119210: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x119210u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x119214: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x119214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119218: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x119218u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x11921c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x11921cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119220: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x119220u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x119224: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x119224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119228: 0xa0400014  sb          $zero, 0x14($v0)
    ctx->pc = 0x119228u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x11922c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x11922cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119230: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x119230u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x119234: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x119234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119238: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x119238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x11923c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x11923cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119240: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x119240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x119244: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x119244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119248: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x119248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x11924c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x11924cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119250: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x119250u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x119254: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x119254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119258: 0xac45002c  sw          $a1, 0x2C($v0)
    ctx->pc = 0x119258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 5));
    // 0x11925c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x11925cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x119260: 0x3e00008  jr          $ra
    ctx->pc = 0x119260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119260u;
        // 0x119264: 0xac650030  sw          $a1, 0x30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119268u;
}
