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

// Function: sub_001648B0
// Address: 0x1648b0 - 0x164938
void sub_001648B0_0x1648b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001648B0_0x1648b0");
#endif

    switch (ctx->pc) {
        case 0x1648e8u: goto label_1648e8;
        case 0x1648f8u: goto label_1648f8;
        case 0x16490cu: goto label_16490c;
        case 0x164928u: goto label_164928;
        default: break;
    }

    ctx->pc = 0x1648b0u;

    // 0x1648b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1648b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1648b4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1648b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1648b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1648b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1648bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1648bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1648c0: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x1648c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x1648c4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1648C4u;
    {
        const bool branch_taken_0x1648c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1648C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1648C4u;
        // 0x1648c8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1648c4) {
            ctx->pc = 0x164928u;
            goto label_164928;
        }
    }
    ctx->pc = 0x1648CCu;
    // 0x1648cc: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x1648ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x1648d0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1648d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1648d4: 0x8e0602e0  lw          $a2, 0x2E0($s0)
    ctx->pc = 0x1648d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x1648d8: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x1648d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x1648dc: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x1648dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1648e0: 0xc04aea0  jal         func_12BA80
    ctx->pc = 0x1648E0u;
    SET_GPR_U32(ctx, 31, 0x1648E8u);
    ctx->pc = 0x1648E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1648E0u;
    // 0x1648e4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA80u, 0x1648E0u, 0x1648E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1648E8u;
label_1648e8:
    // 0x1648e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1648E8u;
    {
        const bool branch_taken_0x1648e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1648ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1648E8u;
        // 0x1648ec: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1648e8) {
            ctx->pc = 0x164904u;
            goto label_164904;
        }
    }
    ctx->pc = 0x1648F0u;
    // 0x1648f0: 0xc04f750  jal         func_13DD40
    ctx->pc = 0x1648F0u;
    SET_GPR_U32(ctx, 31, 0x1648F8u);
    ctx->pc = 0x1648F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1648F0u;
    // 0x1648f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x1648F0u, 0x1648F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1648F8u;
label_1648f8:
    // 0x1648f8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1648f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1648fc: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1648FCu;
    {
        const bool branch_taken_0x1648fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1648fc) {
            ctx->pc = 0x164900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1648FCu;
            // 0x164900: 0x8e02039c  lw          $v0, 0x39C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 924)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164914u;
            goto label_164914;
        }
    }
    ctx->pc = 0x164904u;
label_164904:
    // 0x164904: 0xc059bd2  jal         func_166F48
    ctx->pc = 0x164904u;
    SET_GPR_U32(ctx, 31, 0x16490Cu);
    ctx->pc = 0x164908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164904u;
    // 0x164908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166F48u, 0x164904u, 0x16490Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16490Cu;
label_16490c:
    // 0x16490c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16490Cu;
    {
        const bool branch_taken_0x16490c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16490Cu;
        // 0x164910: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16490c) {
            ctx->pc = 0x16492Cu;
            goto label_16492c;
        }
    }
    ctx->pc = 0x164914u;
label_164914:
    // 0x164914: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x164914u;
    {
        const bool branch_taken_0x164914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164914) {
            ctx->pc = 0x164918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164914u;
            // 0x164918: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16492Cu;
            goto label_16492c;
        }
    }
    ctx->pc = 0x16491Cu;
    // 0x16491c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x16491cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164920: 0xc059bb4  jal         func_166ED0
    ctx->pc = 0x164920u;
    SET_GPR_U32(ctx, 31, 0x164928u);
    ctx->pc = 0x164924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164920u;
    // 0x164924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166ED0u, 0x164920u, 0x164928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164928u;
label_164928:
    // 0x164928: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x164928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16492c:
    // 0x16492c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16492cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x164930: 0x3e00008  jr          $ra
    ctx->pc = 0x164930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164930u;
        // 0x164934: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164938u;
}
