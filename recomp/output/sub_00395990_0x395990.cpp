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

// Function: sub_00395990
// Address: 0x395990 - 0x395a28
void sub_00395990_0x395990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395990_0x395990");
#endif

    switch (ctx->pc) {
        case 0x3959b0u: goto label_3959b0;
        case 0x3959d4u: goto label_3959d4;
        case 0x3959dcu: goto label_3959dc;
        default: break;
    }

    ctx->pc = 0x395990u;

    // 0x395990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x395990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x395994: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x395994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x395998: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x395998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39599c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39599Cu;
    {
        const bool branch_taken_0x39599c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3959A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39599Cu;
        // 0x3959a0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39599c) {
            ctx->pc = 0x3959B8u;
            goto label_3959b8;
        }
    }
    ctx->pc = 0x3959A4u;
    // 0x3959a4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3959a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3959a8: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x3959A8u;
    SET_GPR_U32(ctx, 31, 0x3959B0u);
    ctx->pc = 0x3959ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3959A8u;
    // 0x3959ac: 0x2484ab78  addiu       $a0, $a0, -0x5488 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x3959A8u, 0x3959B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3959B0u;
label_3959b0:
    // 0x3959b0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3959B0u;
    {
        const bool branch_taken_0x3959b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3959B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3959B0u;
        // 0x3959b4: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3959b0) {
            ctx->pc = 0x395A10u;
            goto label_395a10;
        }
    }
    ctx->pc = 0x3959B8u;
label_3959b8:
    // 0x3959b8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3959b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x3959bc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3959bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3959c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3959c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3959c4: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3959C4u;
    {
        const bool branch_taken_0x3959c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3959c4) {
            ctx->pc = 0x3959C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3959C4u;
            // 0x3959c8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395A10u;
            goto label_395a10;
        }
    }
    ctx->pc = 0x3959CCu;
    // 0x3959cc: 0xc0e568a  jal         func_395A28
    ctx->pc = 0x3959CCu;
    SET_GPR_U32(ctx, 31, 0x3959D4u);
    ctx->pc = 0x395A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395A28u, 0x3959CCu, 0x3959D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3959D4u;
label_3959d4:
    // 0x3959d4: 0xc0e69f2  jal         func_39A7C8
    ctx->pc = 0x3959D4u;
    SET_GPR_U32(ctx, 31, 0x3959DCu);
    ctx->pc = 0x3959D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3959D4u;
    // 0x3959d8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A7C8u, 0x3959D4u, 0x3959DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3959DCu;
label_3959dc:
    // 0x3959dc: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x3959dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x3959e0: 0x644307ff  daddiu      $v1, $v0, 0x7FF
    ctx->pc = 0x3959e0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2047);
    // 0x3959e4: 0x64420ffe  daddiu      $v0, $v0, 0xFFE
    ctx->pc = 0x3959e4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4094);
    // 0x3959e8: 0x28650000  slti        $a1, $v1, 0x0
    ctx->pc = 0x3959e8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3959ec: 0x3484fffe  ori         $a0, $a0, 0xFFFE
    ctx->pc = 0x3959ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65534);
    // 0x3959f0: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x3959f0u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x3959f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3959f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3959f8: 0x31d78  dsll        $v1, $v1, 21
    ctx->pc = 0x3959f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 21);
    // 0x3959fc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3959fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x395a00: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x395a00u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x395a04: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x395A04u;
    {
        const bool branch_taken_0x395a04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x395A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A04u;
        // 0x395a08: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395a04) {
            ctx->pc = 0x395A10u;
            goto label_395a10;
        }
    }
    ctx->pc = 0x395A0Cu;
    // 0x395a0c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x395a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_395a10:
    // 0x395a10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x395a10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395a14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x395a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x395a18: 0x3e00008  jr          $ra
    ctx->pc = 0x395A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A18u;
        // 0x395a1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395A20u;
    // 0x395a20: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x395a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x395a24: 0x0  nop
    ctx->pc = 0x395a24u;
    // NOP
    ctx->pc = 0x395a28u;
}
