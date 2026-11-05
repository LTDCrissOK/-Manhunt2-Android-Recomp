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

// Function: sub_00146D18
// Address: 0x146d18 - 0x146d90
void sub_00146D18_0x146d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146D18_0x146d18");
#endif

    switch (ctx->pc) {
        case 0x146d38u: goto label_146d38;
        case 0x146d5cu: goto label_146d5c;
        case 0x146d74u: goto label_146d74;
        default: break;
    }

    ctx->pc = 0x146d18u;

    // 0x146d18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x146d1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x146d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x146d20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x146d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x146d24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x146d24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x146d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x146d2c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x146d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x146d30: 0xc051b80  jal         func_146E00
    ctx->pc = 0x146D30u;
    SET_GPR_U32(ctx, 31, 0x146D38u);
    ctx->pc = 0x146D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146D30u;
    // 0x146d34: 0x30b200ff  andi        $s2, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x146E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146E00u, 0x146D30u, 0x146D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146D38u;
label_146d38:
    // 0x146d38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x146d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d3c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x146D3Cu;
    {
        const bool branch_taken_0x146d3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x146D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146D3Cu;
        // 0x146d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146d3c) {
            ctx->pc = 0x146D64u;
            goto label_146d64;
        }
    }
    ctx->pc = 0x146D44u;
    // 0x146d44: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x146d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x146d48: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x146d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x146d4c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x146d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x146d50: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x146d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x146d54: 0xc09c920  jal         func_272480
    ctx->pc = 0x146D54u;
    SET_GPR_U32(ctx, 31, 0x146D5Cu);
    ctx->pc = 0x146D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146D54u;
    // 0x146d58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272480u, 0x146D54u, 0x146D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146D5Cu;
label_146d5c:
    // 0x146d5c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x146D5Cu;
    {
        const bool branch_taken_0x146d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146d5c) {
            ctx->pc = 0x146D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146D5Cu;
            // 0x146d60: 0x8c5002d0  lw          $s0, 0x2D0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146D64u;
            goto label_146d64;
        }
    }
    ctx->pc = 0x146D64u;
label_146d64:
    // 0x146d64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x146d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x146d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d6c: 0xc051b74  jal         func_146DD0
    ctx->pc = 0x146D6Cu;
    SET_GPR_U32(ctx, 31, 0x146D74u);
    ctx->pc = 0x146D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146D6Cu;
    // 0x146d70: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146DD0u, 0x146D6Cu, 0x146D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146D74u;
label_146d74:
    // 0x146d74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x146d74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146d78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x146d78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x146d7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x146d7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146d80: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x146d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x146d84: 0x3e00008  jr          $ra
    ctx->pc = 0x146D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146D84u;
        // 0x146d88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146D8Cu;
    // 0x146d8c: 0x0  nop
    ctx->pc = 0x146d8cu;
    // NOP
    ctx->pc = 0x146d90u;
}
