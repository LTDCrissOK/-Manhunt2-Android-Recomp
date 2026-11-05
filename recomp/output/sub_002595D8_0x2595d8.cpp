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

// Function: sub_002595D8
// Address: 0x2595d8 - 0x259648
void sub_002595D8_0x2595d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002595D8_0x2595d8");
#endif

    switch (ctx->pc) {
        case 0x25960cu: goto label_25960c;
        case 0x259620u: goto label_259620;
        case 0x259630u: goto label_259630;
        default: break;
    }

    ctx->pc = 0x2595d8u;

    // 0x2595d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2595d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2595dc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2595dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2595e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2595e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2595e4: 0x24422250  addiu       $v0, $v0, 0x2250
    ctx->pc = 0x2595e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8784));
    // 0x2595e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2595e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2595ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2595ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2595f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2595f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2595f4: 0xae020218  sw          $v0, 0x218($s0)
    ctx->pc = 0x2595f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 2));
    // 0x2595f8: 0x8e040234  lw          $a0, 0x234($s0)
    ctx->pc = 0x2595f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x2595fc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2595FCu;
    {
        const bool branch_taken_0x2595fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x259600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2595FCu;
        // 0x259600: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2595fc) {
            ctx->pc = 0x25960Cu;
            goto label_25960c;
        }
    }
    ctx->pc = 0x259604u;
    // 0x259604: 0xc0d5c0e  jal         func_357038
    ctx->pc = 0x259604u;
    SET_GPR_U32(ctx, 31, 0x25960Cu);
    ctx->pc = 0x259608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259604u;
    // 0x259608: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357038u, 0x259604u, 0x25960Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25960Cu;
label_25960c:
    // 0x25960c: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x25960cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x259610: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x259610u;
    {
        const bool branch_taken_0x259610 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x259610) {
            ctx->pc = 0x259614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259610u;
            // 0x259614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259628u;
            goto label_259628;
        }
    }
    ctx->pc = 0x259618u;
    // 0x259618: 0xc0c3212  jal         func_30C848
    ctx->pc = 0x259618u;
    SET_GPR_U32(ctx, 31, 0x259620u);
    ctx->pc = 0x30C848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C848u, 0x259618u, 0x259620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259620u;
label_259620:
    // 0x259620: 0xae000224  sw          $zero, 0x224($s0)
    ctx->pc = 0x259620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
    // 0x259624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x259624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_259628:
    // 0x259628: 0xc0836c2  jal         func_20DB08
    ctx->pc = 0x259628u;
    SET_GPR_U32(ctx, 31, 0x259630u);
    ctx->pc = 0x25962Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259628u;
    // 0x25962c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB08u, 0x259628u, 0x259630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259630u;
label_259630:
    // 0x259630: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x259630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259634: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x259634u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x259638: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x259638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25963c: 0x3e00008  jr          $ra
    ctx->pc = 0x25963Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25963Cu;
        // 0x259640: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25963Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259644u;
    // 0x259644: 0x0  nop
    ctx->pc = 0x259644u;
    // NOP
    ctx->pc = 0x259648u;
}
