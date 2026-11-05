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

// Function: sub_003D5288
// Address: 0x3d5288 - 0x3d5308
void sub_003D5288_0x3d5288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5288_0x3d5288");
#endif

    switch (ctx->pc) {
        case 0x3d52acu: goto label_3d52ac;
        case 0x3d52c0u: goto label_3d52c0;
        case 0x3d52ecu: goto label_3d52ec;
        default: break;
    }

    ctx->pc = 0x3d5288u;

    // 0x3d5288: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d5288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3d528c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3d528cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3d5290: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d5290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d5294: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d5294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5298: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3d5298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d529c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3d529cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3d52a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d52a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3d52a4: 0xc0f5480  jal         func_3D5200
    ctx->pc = 0x3D52A4u;
    SET_GPR_U32(ctx, 31, 0x3D52ACu);
    ctx->pc = 0x3D52A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D52A4u;
    // 0x3d52a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5200u, 0x3D52A4u, 0x3D52ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D52ACu;
label_3d52ac:
    // 0x3d52ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d52acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d52b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d52b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d52b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d52b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d52b8: 0xc0f5480  jal         func_3D5200
    ctx->pc = 0x3D52B8u;
    SET_GPR_U32(ctx, 31, 0x3D52C0u);
    ctx->pc = 0x3D52BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D52B8u;
    // 0x3d52bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5200u, 0x3D52B8u, 0x3D52C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D52C0u;
label_3d52c0:
    // 0x3d52c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d52c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d52c4: 0x2a22001f  slti        $v0, $s1, 0x1F
    ctx->pc = 0x3d52c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x3d52c8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D52C8u;
    {
        const bool branch_taken_0x3d52c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d52c8) {
            ctx->pc = 0x3D52CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D52C8u;
            // 0x3d52cc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D52E4u;
            goto label_3d52e4;
        }
    }
    ctx->pc = 0x3D52D0u;
    // 0x3d52d0: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3d52d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3d52d4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x3d52d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d52d8: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x3d52d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3d52dc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3d52dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3d52e0: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x3d52e0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_3d52e4:
    // 0x3d52e4: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3D52E4u;
    SET_GPR_U32(ctx, 31, 0x3D52ECu);
    ctx->pc = 0x3D52E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D52E4u;
    // 0x3d52e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3D52E4u, 0x3D52ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D52ECu;
label_3d52ec:
    // 0x3d52ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d52ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d52f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3d52f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d52f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d52f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d52f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d52f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d52fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3D52FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D52FCu;
        // 0x3d5300: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D52FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D5304u;
    // 0x3d5304: 0x0  nop
    ctx->pc = 0x3d5304u;
    // NOP
    ctx->pc = 0x3d5308u;
}
