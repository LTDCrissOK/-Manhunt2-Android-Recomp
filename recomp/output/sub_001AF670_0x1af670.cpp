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

// Function: sub_001AF670
// Address: 0x1af670 - 0x1af750
void sub_001AF670_0x1af670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF670_0x1af670");
#endif

    switch (ctx->pc) {
        case 0x1af690u: goto label_1af690;
        case 0x1af6a0u: goto label_1af6a0;
        case 0x1af6b8u: goto label_1af6b8;
        case 0x1af6d0u: goto label_1af6d0;
        case 0x1af718u: goto label_1af718;
        case 0x1af730u: goto label_1af730;
        default: break;
    }

    ctx->pc = 0x1af670u;

    // 0x1af670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1af670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1af674: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af678: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1af678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1af67c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1af67cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af680: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1af680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1af684: 0x241101ba  addiu       $s1, $zero, 0x1BA
    ctx->pc = 0x1af684u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    // 0x1af688: 0xc08da92  jal         func_236A48
    ctx->pc = 0x1AF688u;
    SET_GPR_U32(ctx, 31, 0x1AF690u);
    ctx->pc = 0x1AF68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF688u;
    // 0x1af68c: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A48u, 0x1AF688u, 0x1AF690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF690u;
label_1af690:
    // 0x1af690: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AF690u;
    {
        const bool branch_taken_0x1af690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af690) {
            ctx->pc = 0x1AF694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF690u;
            // 0x1af694: 0x2411012d  addiu       $s1, $zero, 0x12D (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF6D8u;
            goto label_1af6d8;
        }
    }
    ctx->pc = 0x1AF698u;
    // 0x1af698: 0xc08dada  jal         func_236B68
    ctx->pc = 0x1AF698u;
    SET_GPR_U32(ctx, 31, 0x1AF6A0u);
    ctx->pc = 0x1AF69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF698u;
    // 0x1af69c: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B68u, 0x1AF698u, 0x1AF6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF6A0u;
label_1af6a0:
    // 0x1af6a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF6A0u;
    {
        const bool branch_taken_0x1af6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af6a0) {
            ctx->pc = 0x1AF6B0u;
            goto label_1af6b0;
        }
    }
    ctx->pc = 0x1AF6A8u;
    // 0x1af6a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1AF6A8u;
    {
        const bool branch_taken_0x1af6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6A8u;
        // 0x1af6ac: 0x2411012d  addiu       $s1, $zero, 0x12D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af6a8) {
            ctx->pc = 0x1AF6D8u;
            goto label_1af6d8;
        }
    }
    ctx->pc = 0x1AF6B0u;
label_1af6b0:
    // 0x1af6b0: 0xc08dacc  jal         func_236B30
    ctx->pc = 0x1AF6B0u;
    SET_GPR_U32(ctx, 31, 0x1AF6B8u);
    ctx->pc = 0x1AF6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF6B0u;
    // 0x1af6b4: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B30u, 0x1AF6B0u, 0x1AF6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF6B8u;
label_1af6b8:
    // 0x1af6b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF6B8u;
    {
        const bool branch_taken_0x1af6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af6b8) {
            ctx->pc = 0x1AF6C8u;
            goto label_1af6c8;
        }
    }
    ctx->pc = 0x1AF6C0u;
    // 0x1af6c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1AF6C0u;
    {
        const bool branch_taken_0x1af6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6C0u;
        // 0x1af6c4: 0x2411012c  addiu       $s1, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af6c0) {
            ctx->pc = 0x1AF6D8u;
            goto label_1af6d8;
        }
    }
    ctx->pc = 0x1AF6C8u;
label_1af6c8:
    // 0x1af6c8: 0xc08dab6  jal         func_236AD8
    ctx->pc = 0x1AF6C8u;
    SET_GPR_U32(ctx, 31, 0x1AF6D0u);
    ctx->pc = 0x1AF6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF6C8u;
    // 0x1af6cc: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x1AF6C8u, 0x1AF6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF6D0u;
label_1af6d0:
    // 0x1af6d0: 0x2403012b  addiu       $v1, $zero, 0x12B
    ctx->pc = 0x1af6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
    // 0x1af6d4: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1af6d4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_1af6d8:
    // 0x1af6d8: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x1af6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1af6dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1af6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1af6e0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1af6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1af6e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1af6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1af6e8: 0x10710013  beq         $v1, $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AF6E8u;
    {
        const bool branch_taken_0x1af6e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x1AF6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6E8u;
        // 0x1af6ec: 0x240201ba  addiu       $v0, $zero, 0x1BA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af6e8) {
            ctx->pc = 0x1AF738u;
            goto label_1af738;
        }
    }
    ctx->pc = 0x1AF6F0u;
    // 0x1af6f0: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF6F0u;
    {
        const bool branch_taken_0x1af6f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AF6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6F0u;
        // 0x1af6f4: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af6f0) {
            ctx->pc = 0x1AF70Cu;
            goto label_1af70c;
        }
    }
    ctx->pc = 0x1AF6F8u;
    // 0x1af6f8: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1af6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1af6fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1af6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1af700: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1af700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1af704: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF704u;
    {
        const bool branch_taken_0x1af704 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF704u;
        // 0x1af708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af704) {
            ctx->pc = 0x1AF720u;
            goto label_1af720;
        }
    }
    ctx->pc = 0x1AF70Cu;
label_1af70c:
    // 0x1af70c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af710: 0xc06b85c  jal         func_1AE170
    ctx->pc = 0x1AF710u;
    SET_GPR_U32(ctx, 31, 0x1AF718u);
    ctx->pc = 0x1AF714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF710u;
    // 0x1af714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x1AF710u, 0x1AF718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF718u;
label_1af718:
    // 0x1af718: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1AF718u;
    {
        const bool branch_taken_0x1af718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF718u;
        // 0x1af71c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af718) {
            ctx->pc = 0x1AF740u;
            goto label_1af740;
        }
    }
    ctx->pc = 0x1AF720u;
label_1af720:
    // 0x1af720: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1af720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af724: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1af724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1af728: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AF728u;
    SET_GPR_U32(ctx, 31, 0x1AF730u);
    ctx->pc = 0x1AF72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF728u;
    // 0x1af72c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AF728u, 0x1AF730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF730u;
label_1af730:
    // 0x1af730: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF730u;
    {
        const bool branch_taken_0x1af730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF730u;
        // 0x1af734: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af730) {
            ctx->pc = 0x1AF740u;
            goto label_1af740;
        }
    }
    ctx->pc = 0x1AF738u;
label_1af738:
    // 0x1af738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1af738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af73c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af73cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af740:
    // 0x1af740: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1af740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af744: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1af744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af748: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF748u;
        // 0x1af74c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF750u;
}
