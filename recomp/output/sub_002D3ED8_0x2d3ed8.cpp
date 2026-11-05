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

// Function: sub_002D3ED8
// Address: 0x2d3ed8 - 0x2d3f60
void sub_002D3ED8_0x2d3ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3ED8_0x2d3ed8");
#endif

    switch (ctx->pc) {
        case 0x2d3f10u: goto label_2d3f10;
        case 0x2d3f24u: goto label_2d3f24;
        case 0x2d3f34u: goto label_2d3f34;
        case 0x2d3f48u: goto label_2d3f48;
        default: break;
    }

    ctx->pc = 0x2d3ed8u;

    // 0x2d3ed8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d3ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d3edc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2d3edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2d3ee0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d3ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d3ee4: 0x24423dc8  addiu       $v0, $v0, 0x3DC8
    ctx->pc = 0x2d3ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15816));
    // 0x2d3ee8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d3ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d3eec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d3eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ef0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d3ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d3ef4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2d3ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2d3ef8: 0xae0201c0  sw          $v0, 0x1C0($s0)
    ctx->pc = 0x2d3ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 2));
    // 0x2d3efc: 0x9062bd24  lbu         $v0, -0x42DC($v1)
    ctx->pc = 0x2d3efcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FBD24u));
    // 0x2d3f00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3F00u;
    {
        const bool branch_taken_0x2d3f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3F00u;
        // 0x2d3f04: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3f00) {
            ctx->pc = 0x2D3F10u;
            goto label_2d3f10;
        }
    }
    ctx->pc = 0x2D3F08u;
    // 0x2d3f08: 0xc0b50de  jal         func_2D4378
    ctx->pc = 0x2D3F08u;
    SET_GPR_U32(ctx, 31, 0x2D3F10u);
    ctx->pc = 0x2D4378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4378u, 0x2D3F08u, 0x2D3F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3F10u;
label_2d3f10:
    // 0x2d3f10: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2d3f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d3f14: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3F14u;
    {
        const bool branch_taken_0x2d3f14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3f14) {
            ctx->pc = 0x2D3F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3F14u;
            // 0x2d3f18: 0x26040024  addiu       $a0, $s0, 0x24 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3F2Cu;
            goto label_2d3f2c;
        }
    }
    ctx->pc = 0x2D3F1Cu;
    // 0x2d3f1c: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x2D3F1Cu;
    SET_GPR_U32(ctx, 31, 0x2D3F24u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2D3F1Cu, 0x2D3F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3F24u;
label_2d3f24:
    // 0x2d3f24: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2d3f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2d3f28: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x2d3f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_2d3f2c:
    // 0x2d3f2c: 0xc0c9a9c  jal         func_326A70
    ctx->pc = 0x2D3F2Cu;
    SET_GPR_U32(ctx, 31, 0x2D3F34u);
    ctx->pc = 0x2D3F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3F2Cu;
    // 0x2d3f30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326A70u, 0x2D3F2Cu, 0x2D3F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3F34u;
label_2d3f34:
    // 0x2d3f34: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2d3f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2d3f38: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3F38u;
    {
        const bool branch_taken_0x2d3f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3f38) {
            ctx->pc = 0x2D3F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3F38u;
            // 0x2d3f3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3F4Cu;
            goto label_2d3f4c;
        }
    }
    ctx->pc = 0x2D3F40u;
    // 0x2d3f40: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2D3F40u;
    SET_GPR_U32(ctx, 31, 0x2D3F48u);
    ctx->pc = 0x2D3F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3F40u;
    // 0x2d3f44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D3F40u, 0x2D3F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3F48u;
label_2d3f48:
    // 0x2d3f48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d3f48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d3f4c:
    // 0x2d3f4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d3f4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d3f50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d3f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3f54: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3F54u;
        // 0x2d3f58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3F5Cu;
    // 0x2d3f5c: 0x0  nop
    ctx->pc = 0x2d3f5cu;
    // NOP
    ctx->pc = 0x2d3f60u;
}
