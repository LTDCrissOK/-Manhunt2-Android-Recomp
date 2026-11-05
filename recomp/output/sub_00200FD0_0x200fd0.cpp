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

// Function: sub_00200FD0
// Address: 0x200fd0 - 0x201030
void sub_00200FD0_0x200fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200FD0_0x200fd0");
#endif

    switch (ctx->pc) {
        case 0x200ff8u: goto label_200ff8;
        case 0x20100cu: goto label_20100c;
        case 0x201020u: goto label_201020;
        default: break;
    }

    ctx->pc = 0x200fd0u;

    // 0x200fd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x200fd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200fd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x200fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x200fdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x200fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200fe0: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x200fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x200fe4: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x200fe4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x200fe8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x200FE8u;
    {
        const bool branch_taken_0x200fe8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x200fe8) {
            ctx->pc = 0x200FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200FE8u;
            // 0x200fec: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200FFCu;
            goto label_200ffc;
        }
    }
    ctx->pc = 0x200FF0u;
    // 0x200ff0: 0xc0d73fc  jal         func_35CFF0
    ctx->pc = 0x200FF0u;
    SET_GPR_U32(ctx, 31, 0x200FF8u);
    ctx->pc = 0x35CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFF0u, 0x200FF0u, 0x200FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200FF8u;
label_200ff8:
    // 0x200ff8: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x200ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_200ffc:
    // 0x200ffc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x200FFCu;
    {
        const bool branch_taken_0x200ffc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x200ffc) {
            ctx->pc = 0x201000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200FFCu;
            // 0x201000: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201010u;
            goto label_201010;
        }
    }
    ctx->pc = 0x201004u;
    // 0x201004: 0xc081d00  jal         func_207400
    ctx->pc = 0x201004u;
    SET_GPR_U32(ctx, 31, 0x20100Cu);
    ctx->pc = 0x207400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207400u, 0x201004u, 0x20100Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20100Cu;
label_20100c:
    // 0x20100c: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x20100cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_201010:
    // 0x201010: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x201010u;
    {
        const bool branch_taken_0x201010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x201014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201010u;
        // 0x201014: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201010) {
            ctx->pc = 0x201024u;
            goto label_201024;
        }
    }
    ctx->pc = 0x201018u;
    // 0x201018: 0xc081d00  jal         func_207400
    ctx->pc = 0x201018u;
    SET_GPR_U32(ctx, 31, 0x201020u);
    ctx->pc = 0x207400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207400u, 0x201018u, 0x201020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201020u;
label_201020:
    // 0x201020: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201020u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_201024:
    // 0x201024: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x201024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201028: 0x3e00008  jr          $ra
    ctx->pc = 0x201028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201028u;
        // 0x20102c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201030u;
}
