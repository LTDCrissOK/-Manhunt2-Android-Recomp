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

// Function: sub_0026DDA0
// Address: 0x26dda0 - 0x26de28
void sub_0026DDA0_0x26dda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026DDA0_0x26dda0");
#endif

    switch (ctx->pc) {
        case 0x26ddfcu: goto label_26ddfc;
        case 0x26de04u: goto label_26de04;
        case 0x26de14u: goto label_26de14;
        default: break;
    }

    ctx->pc = 0x26dda0u;

    // 0x26dda0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26dda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26dda4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x26dda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x26dda8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x26dda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x26ddac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26ddacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ddb0: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x26ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x26ddb4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26DDB4u;
    {
        const bool branch_taken_0x26ddb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DDB4u;
        // 0x26ddb8: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ddb4) {
            ctx->pc = 0x26DE0Cu;
            goto label_26de0c;
        }
    }
    ctx->pc = 0x26DDBCu;
    // 0x26ddbc: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x26ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x26ddc0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26ddc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26ddc4: 0x54430014  bnel        $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x26DDC4u;
    {
        const bool branch_taken_0x26ddc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26ddc4) {
            ctx->pc = 0x26DDC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DDC4u;
            // 0x26ddc8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DE18u;
            goto label_26de18;
        }
    }
    ctx->pc = 0x26DDCCu;
    // 0x26ddcc: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x26ddccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x26ddd0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26ddd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ddd4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x26ddd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x26ddd8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26ddd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26dddc: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x26dddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26dde0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x26dde0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x26dde4: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x26dde4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x26dde8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x26dde8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x26ddec: 0x24080078  addiu       $t0, $zero, 0x78
    ctx->pc = 0x26ddecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x26ddf0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x26ddf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x26ddf4: 0xc09fd46  jal         func_27F518
    ctx->pc = 0x26DDF4u;
    SET_GPR_U32(ctx, 31, 0x26DDFCu);
    ctx->pc = 0x26DDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DDF4u;
    // 0x26ddf8: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F518u, 0x26DDF4u, 0x26DDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DDFCu;
label_26ddfc:
    // 0x26ddfc: 0xc084aba  jal         func_212AE8
    ctx->pc = 0x26DDFCu;
    SET_GPR_U32(ctx, 31, 0x26DE04u);
    ctx->pc = 0x26DE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DDFCu;
    // 0x26de00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212AE8u, 0x26DDFCu, 0x26DE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DE04u;
label_26de04:
    // 0x26de04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26DE04u;
    {
        const bool branch_taken_0x26de04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE04u;
        // 0x26de08: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de04) {
            ctx->pc = 0x26DE18u;
            goto label_26de18;
        }
    }
    ctx->pc = 0x26DE0Cu;
label_26de0c:
    // 0x26de0c: 0xc084aba  jal         func_212AE8
    ctx->pc = 0x26DE0Cu;
    SET_GPR_U32(ctx, 31, 0x26DE14u);
    ctx->pc = 0x26DE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DE0Cu;
    // 0x26de10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212AE8u, 0x26DE0Cu, 0x26DE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DE14u;
label_26de14:
    // 0x26de14: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x26de14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26de18:
    // 0x26de18: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x26de18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26de1c: 0x3e00008  jr          $ra
    ctx->pc = 0x26DE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26DE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE1Cu;
        // 0x26de20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26DE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26DE24u;
    // 0x26de24: 0x0  nop
    ctx->pc = 0x26de24u;
    // NOP
    ctx->pc = 0x26de28u;
}
