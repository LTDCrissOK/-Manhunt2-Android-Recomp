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

// Function: sub_003BE128
// Address: 0x3be128 - 0x3be1a0
void sub_003BE128_0x3be128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BE128_0x3be128");
#endif

    switch (ctx->pc) {
        case 0x3be13cu: goto label_3be13c;
        default: break;
    }

    ctx->pc = 0x3be128u;

    // 0x3be128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3be128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3be12c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3be12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3be130: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3be130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3be134: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x3BE134u;
    SET_GPR_U32(ctx, 31, 0x3BE13Cu);
    ctx->pc = 0x3BE138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE134u;
    // 0x3be138: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x3BE134u, 0x3BE13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE13Cu;
label_3be13c:
    // 0x3be13c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x3be13cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x3be140: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x3be140u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x3be144: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x3be144u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x3be148: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x3be148u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x3be14c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3be14cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x3be150: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x3be150u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x3be154: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3be154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3be158: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x3be158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x3be15c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x3be15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x3be160: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x3be160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x3be164: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x3be164u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3)); // MMIO: 0x1000f590
    // 0x3be168: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x3be168u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x3be16c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x3be16cu;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 16)); // MMIO: 0x1000b000
    // 0x3be170: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3be170u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x3be174: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x3be174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x3be178: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x3be178u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x3be17c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BE17Cu;
    {
        const bool branch_taken_0x3be17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE17Cu;
        // 0x3be180: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be17c) {
            ctx->pc = 0x3BE190u;
            goto label_3be190;
        }
    }
    ctx->pc = 0x3BE184u;
    // 0x3be184: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3be184u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3be188: 0x80f401a  j           func_3D0068
    ctx->pc = 0x3BE188u;
    ctx->pc = 0x3BE18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE188u;
    // 0x3be18c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0068u;
    sub_003D0068_0x3d0068(rdram, ctx, runtime); return;
    ctx->pc = 0x3BE190u;
label_3be190:
    // 0x3be190: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3be190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3be194: 0x3e00008  jr          $ra
    ctx->pc = 0x3BE194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BE198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE194u;
        // 0x3be198: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BE194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BE19Cu;
    // 0x3be19c: 0x0  nop
    ctx->pc = 0x3be19cu;
    // NOP
    ctx->pc = 0x3be1a0u;
}
