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

// Function: sub_00236930
// Address: 0x236930 - 0x2369a0
void sub_00236930_0x236930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236930_0x236930");
#endif

    switch (ctx->pc) {
        case 0x236944u: goto label_236944;
        case 0x236958u: goto label_236958;
        case 0x236980u: goto label_236980;
        default: break;
    }

    ctx->pc = 0x236930u;

    // 0x236930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236934: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236938: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x236938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23693c: 0xc08dab6  jal         func_236AD8
    ctx->pc = 0x23693Cu;
    SET_GPR_U32(ctx, 31, 0x236944u);
    ctx->pc = 0x236940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23693Cu;
    // 0x236940: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x23693Cu, 0x236944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236944u;
label_236944:
    // 0x236944: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x236944u;
    {
        const bool branch_taken_0x236944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236944u;
        // 0x236948: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236944) {
            ctx->pc = 0x23698Cu;
            goto label_23698c;
        }
    }
    ctx->pc = 0x23694Cu;
    // 0x23694c: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x23694cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x236950: 0xc0ac9da  jal         func_2B2768
    ctx->pc = 0x236950u;
    SET_GPR_U32(ctx, 31, 0x236958u);
    ctx->pc = 0x236954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236950u;
    // 0x236954: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2768u, 0x236950u, 0x236958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236958u;
label_236958:
    // 0x236958: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x236958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23695c: 0x8e020228  lw          $v0, 0x228($s0)
    ctx->pc = 0x23695cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x236960: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x236960u;
    {
        const bool branch_taken_0x236960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x236964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236960u;
        // 0x236964: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236960) {
            ctx->pc = 0x236970u;
            goto label_236970;
        }
    }
    ctx->pc = 0x236968u;
    // 0x236968: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x236968u;
    {
        const bool branch_taken_0x236968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236968u;
        // 0x23696c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236968) {
            ctx->pc = 0x23698Cu;
            goto label_23698c;
        }
    }
    ctx->pc = 0x236970u;
label_236970:
    // 0x236970: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x236970u;
    {
        const bool branch_taken_0x236970 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x236974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236970u;
        // 0x236974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236970) {
            ctx->pc = 0x236988u;
            goto label_236988;
        }
    }
    ctx->pc = 0x236978u;
    // 0x236978: 0xc08db1e  jal         func_236C78
    ctx->pc = 0x236978u;
    SET_GPR_U32(ctx, 31, 0x236980u);
    ctx->pc = 0x23697Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236978u;
    // 0x23697c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C78u, 0x236978u, 0x236980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236980u;
label_236980:
    // 0x236980: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x236980u;
    {
        const bool branch_taken_0x236980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236980u;
        // 0x236984: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236980) {
            ctx->pc = 0x236990u;
            goto label_236990;
        }
    }
    ctx->pc = 0x236988u;
label_236988:
    // 0x236988: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x236988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23698c:
    // 0x23698c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23698cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236990:
    // 0x236990: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x236994: 0x3e00008  jr          $ra
    ctx->pc = 0x236994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236994u;
        // 0x236998: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23699Cu;
    // 0x23699c: 0x0  nop
    ctx->pc = 0x23699cu;
    // NOP
    ctx->pc = 0x2369a0u;
}
