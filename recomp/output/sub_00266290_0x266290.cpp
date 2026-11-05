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

// Function: sub_00266290
// Address: 0x266290 - 0x266308
void sub_00266290_0x266290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266290_0x266290");
#endif

    switch (ctx->pc) {
        case 0x2662ccu: goto label_2662cc;
        case 0x2662f4u: goto label_2662f4;
        default: break;
    }

    ctx->pc = 0x266290u;

    // 0x266290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x266290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x266294: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x266294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x266298: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x266298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x26629c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26629cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2662a0: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x2662a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2662a4: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x2662a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x2662a8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2662A8u;
    {
        const bool branch_taken_0x2662a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2662ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2662A8u;
        // 0x2662ac: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2662a8) {
            ctx->pc = 0x2662F4u;
            goto label_2662f4;
        }
    }
    ctx->pc = 0x2662B0u;
    // 0x2662b0: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x2662b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x2662b4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2662b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2662b8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2662B8u;
    {
        const bool branch_taken_0x2662b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2662BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2662B8u;
        // 0x2662bc: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2662b8) {
            ctx->pc = 0x2662C4u;
            goto label_2662c4;
        }
    }
    ctx->pc = 0x2662C0u;
    // 0x2662c0: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x2662c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
label_2662c4:
    // 0x2662c4: 0xc083bc0  jal         func_20EF00
    ctx->pc = 0x2662C4u;
    SET_GPR_U32(ctx, 31, 0x2662CCu);
    ctx->pc = 0x2662C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2662C4u;
    // 0x2662c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x2662C4u, 0x2662CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2662CCu;
label_2662cc:
    // 0x2662cc: 0x9202028e  lbu         $v0, 0x28E($s0)
    ctx->pc = 0x2662ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 654)));
    // 0x2662d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2662D0u;
    {
        const bool branch_taken_0x2662d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2662D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2662D0u;
        // 0x2662d4: 0xa20002bc  sb          $zero, 0x2BC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 700), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2662d0) {
            ctx->pc = 0x2662F4u;
            goto label_2662f4;
        }
    }
    ctx->pc = 0x2662D8u;
    // 0x2662d8: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x2662d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x2662dc: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x2662dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2662e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2662e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2662e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2662e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2662e8: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x2662e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x2662ec: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x2662ECu;
    SET_GPR_U32(ctx, 31, 0x2662F4u);
    ctx->pc = 0x2662F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2662ECu;
    // 0x2662f0: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x2662ECu, 0x2662F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2662F4u;
label_2662f4:
    // 0x2662f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2662f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2662f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2662f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2662fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2662FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2662FCu;
        // 0x266300: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2662FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266304u;
    // 0x266304: 0x0  nop
    ctx->pc = 0x266304u;
    // NOP
    ctx->pc = 0x266308u;
}
