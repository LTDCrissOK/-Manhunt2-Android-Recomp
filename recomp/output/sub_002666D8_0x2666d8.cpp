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

// Function: sub_002666D8
// Address: 0x2666d8 - 0x266728
void sub_002666D8_0x2666d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002666D8_0x2666d8");
#endif

    switch (ctx->pc) {
        case 0x266710u: goto label_266710;
        default: break;
    }

    ctx->pc = 0x2666d8u;

    // 0x2666d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2666d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2666dc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2666dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2666e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2666e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2666e4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2666e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2666e8: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x2666E8u;
    {
        const bool branch_taken_0x2666e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2666ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2666E8u;
        // 0x2666ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2666e8) {
            ctx->pc = 0x266718u;
            goto label_266718;
        }
    }
    ctx->pc = 0x2666F0u;
    // 0x2666f0: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x2666f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x2666f4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2666f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2666f8: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2666f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x2666fc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2666FCu;
    {
        const bool branch_taken_0x2666fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2666fc) {
            ctx->pc = 0x266700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2666FCu;
            // 0x266700: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26671Cu;
            goto label_26671c;
        }
    }
    ctx->pc = 0x266704u;
    // 0x266704: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x266704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x266708: 0xc047860  jal         func_11E180
    ctx->pc = 0x266708u;
    SET_GPR_U32(ctx, 31, 0x266710u);
    ctx->pc = 0x26670Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266708u;
    // 0x26670c: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E180u, 0x266708u, 0x266710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266710u;
label_266710:
    // 0x266710: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x266710u;
    {
        const bool branch_taken_0x266710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266710) {
            ctx->pc = 0x266714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266710u;
            // 0x266714: 0xae0202d8  sw          $v0, 0x2D8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266718u;
            goto label_266718;
        }
    }
    ctx->pc = 0x266718u;
label_266718:
    // 0x266718: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x266718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26671c:
    // 0x26671c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x26671cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x266720: 0x3e00008  jr          $ra
    ctx->pc = 0x266720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266720u;
        // 0x266724: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266728u;
}
