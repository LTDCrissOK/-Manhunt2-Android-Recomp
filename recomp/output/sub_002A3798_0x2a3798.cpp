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

// Function: sub_002A3798
// Address: 0x2a3798 - 0x2a3824
void sub_002A3798_0x2a3798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3798_0x2a3798");
#endif

    ctx->pc = 0x2a3798u;

    // 0x2a3798: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2a3798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a379c: 0x2ca20010  sltiu       $v0, $a1, 0x10
    ctx->pc = 0x2a379cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2a37a0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2A37A0u;
    {
        const bool branch_taken_0x2a37a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A37A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A37A0u;
        // 0x2a37a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a37a0) {
            ctx->pc = 0x2A3840u;
            return;
        }
    }
    ctx->pc = 0x2A37A8u;
    // 0x2a37a8: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2a37a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2a37ac: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2a37acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a37b0: 0x2442d4f0  addiu       $v0, $v0, -0x2B10
    ctx->pc = 0x2a37b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956272));
    // 0x2a37b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a37b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a37b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a37b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a37bc: 0x800008  jr          $a0
    ctx->pc = 0x2A37BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A37C4u: goto label_2a37c4;
            case 0x2A37CCu: goto label_2a37cc;
            case 0x2A37D4u: goto label_2a37d4;
            case 0x2A37DCu: goto label_2a37dc;
            case 0x2A37E4u: goto label_2a37e4;
            case 0x2A37ECu: goto label_2a37ec;
            case 0x2A37F4u: goto label_2a37f4;
            case 0x2A37FCu: goto label_2a37fc;
            case 0x2A3804u: goto label_2a3804;
            case 0x2A380Cu: goto label_2a380c;
            case 0x2A3814u: goto label_2a3814;
            case 0x2A381Cu: goto label_2a381c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A37BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A37C4u;
label_2a37c4:
    // 0x2a37c4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2A37C4u;
    {
        const bool branch_taken_0x2a37c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A37C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A37C4u;
        // 0x2a37c8: 0x8cc4026c  lw          $a0, 0x26C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a37c4) {
            ctx->pc = 0x2A3840u;
            return;
        }
    }
    ctx->pc = 0x2A37CCu;
label_2a37cc:
    // 0x2a37cc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2A37CCu;
    {
        const bool branch_taken_0x2a37cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A37D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A37CCu;
        // 0x2a37d0: 0x8cc40270  lw          $a0, 0x270($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a37cc) {
            ctx->pc = 0x2A3840u;
            return;
        }
    }
    ctx->pc = 0x2A37D4u;
label_2a37d4:
    // 0x2a37d4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2A37D4u;
    {
        const bool branch_taken_0x2a37d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A37D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A37D4u;
        // 0x2a37d8: 0x8cc40274  lw          $a0, 0x274($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a37d4) {
            ctx->pc = 0x2A3840u;
            return;
        }
    }
    ctx->pc = 0x2A37DCu;
label_2a37dc:
    // 0x2a37dc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2A37DCu;
    {
        const bool branch_taken_0x2a37dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A37E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A37DCu;
        // 0x2a37e0: 0x8cc40278  lw          $a0, 0x278($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 632)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a37dc) {
            ctx->pc = 0x2A3840u;
            return;
        }
    }
    ctx->pc = 0x2A37E4u;
label_2a37e4:
    // 0x2a37e4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2A37E4u;
    {
        const bool branch_taken_0x2a37e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A37E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A37E4u;
        // 0x2a37e8: 0x8cc4027c  lw          $a0, 0x27C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a37e4) {
            ctx->pc = 0x2A3840u;
            return;
        }
    }
    ctx->pc = 0x2A37ECu;
label_2a37ec:
    // 0x2a37ec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2A37ECu;
    {
        const bool branch_taken_0x2a37ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A37F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A37ECu;
        // 0x2a37f0: 0x8cc40280  lw          $a0, 0x280($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a37ec) {
            ctx->pc = 0x2A3840u;
            return;
        }
    }
    ctx->pc = 0x2A37F4u;
label_2a37f4:
    // 0x2a37f4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2A37F4u;
    {
        const bool branch_taken_0x2a37f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A37F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A37F4u;
        // 0x2a37f8: 0x8cc40284  lw          $a0, 0x284($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 644)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a37f4) {
            ctx->pc = 0x2A3840u;
            return;
        }
    }
    ctx->pc = 0x2A37FCu;
label_2a37fc:
    // 0x2a37fc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2A37FCu;
    {
        const bool branch_taken_0x2a37fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A37FCu;
        // 0x2a3800: 0x8cc40288  lw          $a0, 0x288($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a37fc) {
            ctx->pc = 0x2A3840u;
            return;
        }
    }
    ctx->pc = 0x2A3804u;
label_2a3804:
    // 0x2a3804: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2A3804u;
    {
        const bool branch_taken_0x2a3804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3804u;
        // 0x2a3808: 0x8cc4028c  lw          $a0, 0x28C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 652)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3804) {
            ctx->pc = 0x2A3840u;
            return;
        }
    }
    ctx->pc = 0x2A380Cu;
label_2a380c:
    // 0x2a380c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2A380Cu;
    {
        const bool branch_taken_0x2a380c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A380Cu;
        // 0x2a3810: 0x8cc40290  lw          $a0, 0x290($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a380c) {
            ctx->pc = 0x2A3840u;
            return;
        }
    }
    ctx->pc = 0x2A3814u;
label_2a3814:
    // 0x2a3814: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2A3814u;
    {
        const bool branch_taken_0x2a3814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3814u;
        // 0x2a3818: 0x8cc40294  lw          $a0, 0x294($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3814) {
            ctx->pc = 0x2A3840u;
            return;
        }
    }
    ctx->pc = 0x2A381Cu;
label_2a381c:
    // 0x2a381c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A381Cu;
    {
        const bool branch_taken_0x2a381c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A381Cu;
        // 0x2a3820: 0x8cc40298  lw          $a0, 0x298($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a381c) {
            ctx->pc = 0x2A3840u;
            return;
        }
    }
    ctx->pc = 0x2A3824u;
}
