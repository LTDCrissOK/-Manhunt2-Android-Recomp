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

// Function: sub_0014DDD8
// Address: 0x14ddd8 - 0x14de38
void sub_0014DDD8_0x14ddd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014DDD8_0x14ddd8");
#endif

    switch (ctx->pc) {
        case 0x14ddf4u: goto label_14ddf4;
        case 0x14ddfcu: goto label_14ddfc;
        case 0x14de10u: goto label_14de10;
        case 0x14de18u: goto label_14de18;
        default: break;
    }

    ctx->pc = 0x14ddd8u;

    // 0x14ddd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14ddd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14dddc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14dddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14dde0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14dde0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dde4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14dde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14dde8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14dde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14ddec: 0xc053836  jal         func_14E0D8
    ctx->pc = 0x14DDECu;
    SET_GPR_U32(ctx, 31, 0x14DDF4u);
    ctx->pc = 0x14DDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DDECu;
    // 0x14ddf0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E0D8u, 0x14DDECu, 0x14DDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DDF4u;
label_14ddf4:
    // 0x14ddf4: 0xc04d7e2  jal         func_135F88
    ctx->pc = 0x14DDF4u;
    SET_GPR_U32(ctx, 31, 0x14DDFCu);
    ctx->pc = 0x14DDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DDF4u;
    // 0x14ddf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F88u, 0x14DDF4u, 0x14DDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DDFCu;
label_14ddfc:
    // 0x14ddfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14de00: 0xae110464  sw          $s1, 0x464($s0)
    ctx->pc = 0x14de00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1124), GPR_U32(ctx, 17));
    // 0x14de04: 0xae020460  sw          $v0, 0x460($s0)
    ctx->pc = 0x14de04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 2));
    // 0x14de08: 0xc04d89a  jal         func_136268
    ctx->pc = 0x14DE08u;
    SET_GPR_U32(ctx, 31, 0x14DE10u);
    ctx->pc = 0x14DE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DE08u;
    // 0x14de0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136268u, 0x14DE08u, 0x14DE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DE10u;
label_14de10:
    // 0x14de10: 0xc054666  jal         func_151998
    ctx->pc = 0x14DE10u;
    SET_GPR_U32(ctx, 31, 0x14DE18u);
    ctx->pc = 0x14DE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DE10u;
    // 0x14de14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151998u, 0x14DE10u, 0x14DE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DE18u;
label_14de18:
    // 0x14de18: 0xae000964  sw          $zero, 0x964($s0)
    ctx->pc = 0x14de18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2404), GPR_U32(ctx, 0));
    // 0x14de1c: 0xae000960  sw          $zero, 0x960($s0)
    ctx->pc = 0x14de1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2400), GPR_U32(ctx, 0));
    // 0x14de20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14de20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14de24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14de24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14de28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14de28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14de2c: 0x3e00008  jr          $ra
    ctx->pc = 0x14DE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DE2Cu;
        // 0x14de30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DE34u;
    // 0x14de34: 0x0  nop
    ctx->pc = 0x14de34u;
    // NOP
    ctx->pc = 0x14de38u;
}
