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

// Function: sub_001759E8
// Address: 0x1759e8 - 0x175a50
void sub_001759E8_0x1759e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001759E8_0x1759e8");
#endif

    switch (ctx->pc) {
        case 0x175a1cu: goto label_175a1c;
        case 0x175a38u: goto label_175a38;
        default: break;
    }

    ctx->pc = 0x1759e8u;

    // 0x1759e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1759e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1759ec: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1759ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1759f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1759f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1759f4: 0x24420f00  addiu       $v0, $v0, 0xF00
    ctx->pc = 0x1759f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3840));
    // 0x1759f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1759f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1759fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1759fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175a00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x175a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x175a04: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x175a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x175a08: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x175a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x175a0c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x175A0Cu;
    {
        const bool branch_taken_0x175a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x175A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175A0Cu;
        // 0x175a10: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175a0c) {
            ctx->pc = 0x175A1Cu;
            goto label_175a1c;
        }
    }
    ctx->pc = 0x175A14u;
    // 0x175a14: 0xc05d6ae  jal         func_175AB8
    ctx->pc = 0x175A14u;
    SET_GPR_U32(ctx, 31, 0x175A1Cu);
    ctx->pc = 0x175AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175AB8u, 0x175A14u, 0x175A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175A1Cu;
label_175a1c:
    // 0x175a1c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x175a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x175a20: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x175a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x175a24: 0x24420638  addiu       $v0, $v0, 0x638
    ctx->pc = 0x175a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
    // 0x175a28: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x175A28u;
    {
        const bool branch_taken_0x175a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x175A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175A28u;
        // 0x175a2c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175a28) {
            ctx->pc = 0x175A38u;
            goto label_175a38;
        }
    }
    ctx->pc = 0x175A30u;
    // 0x175a30: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x175A30u;
    SET_GPR_U32(ctx, 31, 0x175A38u);
    ctx->pc = 0x175A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175A30u;
    // 0x175a34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x175A30u, 0x175A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175A38u;
label_175a38:
    // 0x175a38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175a3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x175a3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175a40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x175a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175a44: 0x3e00008  jr          $ra
    ctx->pc = 0x175A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175A44u;
        // 0x175a48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175A4Cu;
    // 0x175a4c: 0x0  nop
    ctx->pc = 0x175a4cu;
    // NOP
    ctx->pc = 0x175a50u;
}
