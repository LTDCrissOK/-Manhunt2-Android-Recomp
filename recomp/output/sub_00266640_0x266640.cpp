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

// Function: sub_00266640
// Address: 0x266640 - 0x2666d8
void sub_00266640_0x266640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266640_0x266640");
#endif

    switch (ctx->pc) {
        case 0x26665cu: goto label_26665c;
        default: break;
    }

    ctx->pc = 0x266640u;

    // 0x266640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x266640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x266644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x266644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x266648: 0x9082028e  lbu         $v0, 0x28E($a0)
    ctx->pc = 0x266648u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 654)));
    // 0x26664c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26664Cu;
    {
        const bool branch_taken_0x26664c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26664Cu;
        // 0x266650: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26664c) {
            ctx->pc = 0x266660u;
            goto label_266660;
        }
    }
    ctx->pc = 0x266654u;
    // 0x266654: 0xc099918  jal         func_266460
    ctx->pc = 0x266654u;
    SET_GPR_U32(ctx, 31, 0x26665Cu);
    ctx->pc = 0x266460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266460u, 0x266654u, 0x26665Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26665Cu;
label_26665c:
    // 0x26665c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26665cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_266660:
    // 0x266660: 0x3e00008  jr          $ra
    ctx->pc = 0x266660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266660u;
        // 0x266664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266668u;
    // 0x266668: 0x8c830220  lw          $v1, 0x220($a0)
    ctx->pc = 0x266668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x26666c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26666Cu;
    {
        const bool branch_taken_0x26666c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x266670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26666Cu;
        // 0x266670: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26666c) {
            ctx->pc = 0x266684u;
            goto label_266684;
        }
    }
    ctx->pc = 0x266674u;
    // 0x266674: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x266674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x266678: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x266678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x26667c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x26667cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x266680: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x266680u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_266684:
    // 0x266684: 0x50a0000f  beql        $a1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x266684u;
    {
        const bool branch_taken_0x266684 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x266684) {
            ctx->pc = 0x266688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266684u;
            // 0x266688: 0x8c8300c0  lw          $v1, 0xC0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2666C4u;
            goto label_2666c4;
        }
    }
    ctx->pc = 0x26668Cu;
    // 0x26668c: 0x8ca30418  lw          $v1, 0x418($a1)
    ctx->pc = 0x26668cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1048)));
    // 0x266690: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x266690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x266694: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x266694u;
    {
        const bool branch_taken_0x266694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x266698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266694u;
        // 0x266698: 0x8c8300c0  lw          $v1, 0xC0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266694) {
            ctx->pc = 0x2666B0u;
            goto label_2666b0;
        }
    }
    ctx->pc = 0x26669Cu;
    // 0x26669c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x26669cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2666a0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2666a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2666a4: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2666a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2666a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2666A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2666ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2666A8u;
        // 0x2666ac: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2666A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2666B0u;
label_2666b0:
    // 0x2666b0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2666b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2666b4: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2666b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2666b8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2666b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2666bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2666BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2666C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2666BCu;
        // 0x2666c0: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2666BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2666C4u;
label_2666c4:
    // 0x2666c4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2666c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2666c8: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2666c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2666cc: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2666ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2666d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2666D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2666D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2666D0u;
        // 0x2666d4: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2666D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2666D8u;
}
