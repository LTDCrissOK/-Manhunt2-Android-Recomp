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

// Function: sub_0010E690
// Address: 0x10e690 - 0x10e758
void sub_0010E690_0x10e690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E690_0x10e690");
#endif

    switch (ctx->pc) {
        case 0x10e6e4u: goto label_10e6e4;
        case 0x10e6ecu: goto label_10e6ec;
        case 0x10e6f4u: goto label_10e6f4;
        case 0x10e704u: goto label_10e704;
        case 0x10e710u: goto label_10e710;
        case 0x10e720u: goto label_10e720;
        default: break;
    }

    ctx->pc = 0x10e690u;

    // 0x10e690: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10e690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10e694: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x10e694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x10e698: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x10e698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x10e69c: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x10e69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x10e6a0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x10e6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x10e6a4: 0x27b10014  addiu       $s1, $sp, 0x14
    ctx->pc = 0x10e6a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x10e6a8: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x10e6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x10e6ac: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x10e6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x10e6b0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10e6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x10e6b4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x10e6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x10e6b8: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x10e6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x10e6bc: 0x24920328  addiu       $s2, $a0, 0x328
    ctx->pc = 0x10e6bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 808));
    // 0x10e6c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10e6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10e6c4: 0xafb20030  sw          $s2, 0x30($sp)
    ctx->pc = 0x10e6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 18));
    // 0x10e6c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10e6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10e6cc: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x10e6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x10e6d0: 0x8c700108  lw          $s0, 0x108($v1)
    ctx->pc = 0x10e6d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x10e6d4: 0x24930338  addiu       $s3, $a0, 0x338
    ctx->pc = 0x10e6d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 824));
    // 0x10e6d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e6dc: 0xc072666  jal         func_1C9998
    ctx->pc = 0x10E6DCu;
    SET_GPR_U32(ctx, 31, 0x10E6E4u);
    ctx->pc = 0x10E6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E6DCu;
    // 0x10e6e0: 0xae330018  sw          $s3, 0x18($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9998u, 0x10E6DCu, 0x10E6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E6E4u;
label_10e6e4:
    // 0x10e6e4: 0xc072812  jal         func_1CA048
    ctx->pc = 0x10E6E4u;
    SET_GPR_U32(ctx, 31, 0x10E6ECu);
    ctx->pc = 0x10E6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E6E4u;
    // 0x10e6e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA048u, 0x10E6E4u, 0x10E6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E6ECu;
label_10e6ec:
    // 0x10e6ec: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x10E6ECu;
    SET_GPR_U32(ctx, 31, 0x10E6F4u);
    ctx->pc = 0x10E6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E6ECu;
    // 0x10e6f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x10E6ECu, 0x10E6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E6F4u;
label_10e6f4:
    // 0x10e6f4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x10E6F4u;
    {
        const bool branch_taken_0x10e6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E6F4u;
        // 0x10e6f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e6f4) {
            ctx->pc = 0x10E730u;
            goto label_10e730;
        }
    }
    ctx->pc = 0x10E6FCu;
    // 0x10e6fc: 0xc072818  jal         func_1CA060
    ctx->pc = 0x10E6FCu;
    SET_GPR_U32(ctx, 31, 0x10E704u);
    ctx->pc = 0x10E700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E6FCu;
    // 0x10e700: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA060u, 0x10E6FCu, 0x10E704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E704u;
label_10e704:
    // 0x10e704: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10e704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e708: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x10E708u;
    SET_GPR_U32(ctx, 31, 0x10E710u);
    ctx->pc = 0x10E70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E708u;
    // 0x10e70c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x10E708u, 0x10E710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E710u;
label_10e710:
    // 0x10e710: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10E710u;
    {
        const bool branch_taken_0x10e710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e710) {
            ctx->pc = 0x10E714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E710u;
            // 0x10e714: 0xafb20030  sw          $s2, 0x30($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E728u;
            goto label_10e728;
        }
    }
    ctx->pc = 0x10E718u;
    // 0x10e718: 0xc072894  jal         func_1CA250
    ctx->pc = 0x10E718u;
    SET_GPR_U32(ctx, 31, 0x10E720u);
    ctx->pc = 0x10E71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E718u;
    // 0x10e71c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA250u, 0x10E718u, 0x10E720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E720u;
label_10e720:
    // 0x10e720: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10E720u;
    {
        const bool branch_taken_0x10e720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E720u;
        // 0x10e724: 0xafb20030  sw          $s2, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e720) {
            ctx->pc = 0x10E738u;
            goto label_10e738;
        }
    }
    ctx->pc = 0x10E728u;
label_10e728:
    // 0x10e728: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10E728u;
    {
        const bool branch_taken_0x10e728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E728u;
        // 0x10e72c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e728) {
            ctx->pc = 0x10E738u;
            goto label_10e738;
        }
    }
    ctx->pc = 0x10E730u;
label_10e730:
    // 0x10e730: 0xafb20030  sw          $s2, 0x30($sp)
    ctx->pc = 0x10e730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 18));
    // 0x10e734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10e734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10e738:
    // 0x10e738: 0xae330018  sw          $s3, 0x18($s1)
    ctx->pc = 0x10e738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 19));
    // 0x10e73c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x10e73cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10e740: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x10e740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x10e744: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x10e744u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10e748: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x10e748u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x10e74c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10e74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10e750: 0x3e00008  jr          $ra
    ctx->pc = 0x10E750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E750u;
        // 0x10e754: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E758u;
}
