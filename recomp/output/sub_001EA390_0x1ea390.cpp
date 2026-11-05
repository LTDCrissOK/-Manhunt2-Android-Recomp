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

// Function: sub_001EA390
// Address: 0x1ea390 - 0x1ea420
void sub_001EA390_0x1ea390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA390_0x1ea390");
#endif

    switch (ctx->pc) {
        case 0x1ea3d8u: goto label_1ea3d8;
        case 0x1ea3ecu: goto label_1ea3ec;
        default: break;
    }

    ctx->pc = 0x1ea390u;

    // 0x1ea390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ea390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ea394: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ea394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ea398: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ea398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ea39c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ea39cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea3a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ea3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ea3a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ea3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ea3a8: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x1ea3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x1ea3ac: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1EA3ACu;
    {
        const bool branch_taken_0x1ea3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3ACu;
        // 0x1ea3b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea3ac) {
            ctx->pc = 0x1EA408u;
            goto label_1ea408;
        }
    }
    ctx->pc = 0x1EA3B4u;
    // 0x1ea3b4: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x1ea3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1ea3b8: 0x3862000a  xori        $v0, $v1, 0xA
    ctx->pc = 0x1ea3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)10);
    // 0x1ea3bc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EA3BCu;
    {
        const bool branch_taken_0x1ea3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3BCu;
        // 0x1ea3c0: 0x38620008  xori        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea3bc) {
            ctx->pc = 0x1EA3F4u;
            goto label_1ea3f4;
        }
    }
    ctx->pc = 0x1EA3C4u;
    // 0x1ea3c4: 0x3c10005a  lui         $s0, 0x5A
    ctx->pc = 0x1ea3c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)90 << 16));
    // 0x1ea3c8: 0x8e510040  lw          $s1, 0x40($s2)
    ctx->pc = 0x1ea3c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1ea3cc: 0x26107ee0  addiu       $s0, $s0, 0x7EE0
    ctx->pc = 0x1ea3ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32480));
    // 0x1ea3d0: 0xc07a8ac  jal         func_1EA2B0
    ctx->pc = 0x1EA3D0u;
    SET_GPR_U32(ctx, 31, 0x1EA3D8u);
    ctx->pc = 0x1EA3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA3D0u;
    // 0x1ea3d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2B0u, 0x1EA3D0u, 0x1EA3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA3D8u;
label_1ea3d8:
    // 0x1ea3d8: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x1ea3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1ea3dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ea3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea3e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ea3e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea3e4: 0xc0c362e  jal         func_30D8B8
    ctx->pc = 0x1EA3E4u;
    SET_GPR_U32(ctx, 31, 0x1EA3ECu);
    ctx->pc = 0x1EA3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA3E4u;
    // 0x1ea3e8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D8B8u, 0x1EA3E4u, 0x1EA3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA3ECu;
label_1ea3ec:
    // 0x1ea3ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EA3ECu;
    {
        const bool branch_taken_0x1ea3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA3ECu;
        // 0x1ea3f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea3ec) {
            ctx->pc = 0x1EA40Cu;
            goto label_1ea40c;
        }
    }
    ctx->pc = 0x1EA3F4u;
label_1ea3f4:
    // 0x1ea3f4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EA3F4u;
    {
        const bool branch_taken_0x1ea3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea3f4) {
            ctx->pc = 0x1EA3F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA3F4u;
            // 0x1ea3f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA408u;
            goto label_1ea408;
        }
    }
    ctx->pc = 0x1EA3FCu;
    // 0x1ea3fc: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x1ea3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1ea400: 0x8c4300b8  lw          $v1, 0xB8($v0)
    ctx->pc = 0x1ea400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1ea404: 0x84620054  lh          $v0, 0x54($v1)
    ctx->pc = 0x1ea404u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 84)));
label_1ea408:
    // 0x1ea408: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ea408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ea40c:
    // 0x1ea40c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ea40cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ea410: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ea410u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea414: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ea414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ea418: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA418u;
        // 0x1ea41c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA420u;
}
