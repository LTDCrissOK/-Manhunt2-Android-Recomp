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

// Function: sub_00266360
// Address: 0x266360 - 0x2663b8
void sub_00266360_0x266360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266360_0x266360");
#endif

    switch (ctx->pc) {
        case 0x266388u: goto label_266388;
        case 0x2663a4u: goto label_2663a4;
        default: break;
    }

    ctx->pc = 0x266360u;

    // 0x266360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x266360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x266364: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x266364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x266368: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x266368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26636c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26636cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266370: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x266370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x266374: 0x9222028e  lbu         $v0, 0x28E($s1)
    ctx->pc = 0x266374u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 654)));
    // 0x266378: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x266378u;
    {
        const bool branch_taken_0x266378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266378u;
        // 0x26637c: 0x3c10004a  lui         $s0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266378) {
            ctx->pc = 0x2663A4u;
            goto label_2663a4;
        }
    }
    ctx->pc = 0x266380u;
    // 0x266380: 0xc09990e  jal         func_266438
    ctx->pc = 0x266380u;
    SET_GPR_U32(ctx, 31, 0x266388u);
    ctx->pc = 0x266384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266380u;
    // 0x266384: 0x26109b10  addiu       $s0, $s0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266438u, 0x266380u, 0x266388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266388u;
label_266388:
    // 0x266388: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x266388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x26638c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26638cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x266390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x266390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266394: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x266394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x266398: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x266398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x26639c: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x26639Cu;
    SET_GPR_U32(ctx, 31, 0x2663A4u);
    ctx->pc = 0x2663A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26639Cu;
    // 0x2663a0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x26639Cu, 0x2663A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2663A4u;
label_2663a4:
    // 0x2663a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2663a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2663a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2663a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2663ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2663acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2663b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2663B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2663B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2663B0u;
        // 0x2663b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2663B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2663B8u;
}
