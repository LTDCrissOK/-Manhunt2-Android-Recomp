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

// Function: sub_003AD140
// Address: 0x3ad140 - 0x3ad1e8
void sub_003AD140_0x3ad140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AD140_0x3ad140");
#endif

    switch (ctx->pc) {
        case 0x3ad15cu: goto label_3ad15c;
        case 0x3ad170u: goto label_3ad170;
        case 0x3ad184u: goto label_3ad184;
        case 0x3ad198u: goto label_3ad198;
        case 0x3ad1acu: goto label_3ad1ac;
        case 0x3ad1b8u: goto label_3ad1b8;
        default: break;
    }

    ctx->pc = 0x3ad140u;

    // 0x3ad140: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x3ad140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x3ad144: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ad144u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ad148: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ad148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad14c: 0x24843330  addiu       $a0, $a0, 0x3330
    ctx->pc = 0x3ad14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13104));
    // 0x3ad150: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ad150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ad154: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3AD154u;
    SET_GPR_U32(ctx, 31, 0x3AD15Cu);
    ctx->pc = 0x3AD158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD154u;
    // 0x3ad158: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3AD154u, 0x3AD15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD15Cu;
label_3ad15c:
    // 0x3ad15c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3ad15cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3ad160: 0x248491a0  addiu       $a0, $a0, -0x6E60
    ctx->pc = 0x3ad160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939040));
    // 0x3ad164: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ad164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad168: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3AD168u;
    SET_GPR_U32(ctx, 31, 0x3AD170u);
    ctx->pc = 0x3AD16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD168u;
    // 0x3ad16c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3AD168u, 0x3AD170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD170u;
label_3ad170:
    // 0x3ad170: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3ad170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3ad174: 0x248491a8  addiu       $a0, $a0, -0x6E58
    ctx->pc = 0x3ad174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939048));
    // 0x3ad178: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ad178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad17c: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3AD17Cu;
    SET_GPR_U32(ctx, 31, 0x3AD184u);
    ctx->pc = 0x3AD180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD17Cu;
    // 0x3ad180: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3AD17Cu, 0x3AD184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD184u;
label_3ad184:
    // 0x3ad184: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3ad184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3ad188: 0x248491c0  addiu       $a0, $a0, -0x6E40
    ctx->pc = 0x3ad188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939072));
    // 0x3ad18c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ad18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad190: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3AD190u;
    SET_GPR_U32(ctx, 31, 0x3AD198u);
    ctx->pc = 0x3AD194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD190u;
    // 0x3ad194: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3AD190u, 0x3AD198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD198u;
label_3ad198:
    // 0x3ad198: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3ad198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3ad19c: 0x248491c8  addiu       $a0, $a0, -0x6E38
    ctx->pc = 0x3ad19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939080));
    // 0x3ad1a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ad1a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad1a4: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3AD1A4u;
    SET_GPR_U32(ctx, 31, 0x3AD1ACu);
    ctx->pc = 0x3AD1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD1A4u;
    // 0x3ad1a8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3AD1A4u, 0x3AD1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD1ACu;
label_3ad1ac:
    // 0x3ad1ac: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3ad1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x3ad1b0: 0x24633310  addiu       $v1, $v1, 0x3310
    ctx->pc = 0x3ad1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13072));
    // 0x3ad1b4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3ad1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3ad1b8:
    // 0x3ad1b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ad1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ad1bc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3ad1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x3ad1c0: 0x0  nop
    ctx->pc = 0x3ad1c0u;
    // NOP
    // 0x3ad1c4: 0x0  nop
    ctx->pc = 0x3ad1c4u;
    // NOP
    // 0x3ad1c8: 0x0  nop
    ctx->pc = 0x3ad1c8u;
    // NOP
    // 0x3ad1cc: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3AD1CCu;
    {
        const bool branch_taken_0x3ad1cc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3AD1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD1CCu;
        // 0x3ad1d0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad1cc) {
            ctx->pc = 0x3AD1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ad1b8;
        }
    }
    ctx->pc = 0x3AD1D4u;
    // 0x3ad1d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ad1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ad1d8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3ad1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3ad1dc: 0xac4091b8  sw          $zero, -0x6E48($v0)
    ctx->pc = 0x3ad1dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6591B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6591B8u, _value); } while (0);
    // 0x3ad1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3AD1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD1E0u;
        // 0x3ad1e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD1E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD1E8u;
}
