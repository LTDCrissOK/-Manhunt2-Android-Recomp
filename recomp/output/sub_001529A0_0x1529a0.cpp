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

// Function: sub_001529A0
// Address: 0x1529a0 - 0x152a40
void sub_001529A0_0x1529a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001529A0_0x1529a0");
#endif

    switch (ctx->pc) {
        case 0x1529d4u: goto label_1529d4;
        case 0x152a00u: goto label_152a00;
        case 0x152a2cu: goto label_152a2c;
        default: break;
    }

    ctx->pc = 0x1529a0u;

    // 0x1529a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1529a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1529a4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1529a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1529a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1529a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1529ac: 0x24420af8  addiu       $v0, $v0, 0xAF8
    ctx->pc = 0x1529acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2808));
    // 0x1529b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1529b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1529b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1529b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1529b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1529b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1529bc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1529bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1529c0: 0x8e030460  lw          $v1, 0x460($s0)
    ctx->pc = 0x1529c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x1529c4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1529C4u;
    {
        const bool branch_taken_0x1529c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1529C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1529C4u;
        // 0x1529c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1529c4) {
            ctx->pc = 0x1529D4u;
            goto label_1529d4;
        }
    }
    ctx->pc = 0x1529CCu;
    // 0x1529cc: 0xc054aa4  jal         func_152A90
    ctx->pc = 0x1529CCu;
    SET_GPR_U32(ctx, 31, 0x1529D4u);
    ctx->pc = 0x152A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152A90u, 0x1529CCu, 0x1529D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1529D4u;
label_1529d4:
    // 0x1529d4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1529d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1529d8: 0x32250001  andi        $a1, $s1, 0x1
    ctx->pc = 0x1529d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1529dc: 0x244205f0  addiu       $v0, $v0, 0x5F0
    ctx->pc = 0x1529dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1520));
    // 0x1529e0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1529e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1529e4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1529e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1529e8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1529E8u;
    {
        const bool branch_taken_0x1529e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1529ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1529E8u;
        // 0x1529ec: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1529e8) {
            ctx->pc = 0x152A18u;
            goto label_152a18;
        }
    }
    ctx->pc = 0x1529F0u;
    // 0x1529f0: 0x26030410  addiu       $v1, $s0, 0x410
    ctx->pc = 0x1529f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1040));
    // 0x1529f4: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1529F4u;
    {
        const bool branch_taken_0x1529f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1529f4) {
            ctx->pc = 0x1529F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1529F4u;
            // 0x1529f8: 0x24420638  addiu       $v0, $v0, 0x638 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152A1Cu;
            goto label_152a1c;
        }
    }
    ctx->pc = 0x1529FCu;
    // 0x1529fc: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x1529fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_152a00:
    // 0x152a00: 0x0  nop
    ctx->pc = 0x152a00u;
    // NOP
    // 0x152a04: 0x0  nop
    ctx->pc = 0x152a04u;
    // NOP
    // 0x152a08: 0x0  nop
    ctx->pc = 0x152a08u;
    // NOP
    // 0x152a0c: 0x0  nop
    ctx->pc = 0x152a0cu;
    // NOP
    // 0x152a10: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x152A10u;
    {
        const bool branch_taken_0x152a10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x152a10) {
            ctx->pc = 0x152A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152A10u;
            // 0x152a14: 0x2463ffc0  addiu       $v1, $v1, -0x40 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152a00;
        }
    }
    ctx->pc = 0x152A18u;
label_152a18:
    // 0x152a18: 0x24420638  addiu       $v0, $v0, 0x638
    ctx->pc = 0x152a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
label_152a1c:
    // 0x152a1c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x152A1Cu;
    {
        const bool branch_taken_0x152a1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x152A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A1Cu;
        // 0x152a20: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152a1c) {
            ctx->pc = 0x152A2Cu;
            goto label_152a2c;
        }
    }
    ctx->pc = 0x152A24u;
    // 0x152a24: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x152A24u;
    SET_GPR_U32(ctx, 31, 0x152A2Cu);
    ctx->pc = 0x152A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152A24u;
    // 0x152a28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x152A24u, 0x152A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152A2Cu;
label_152a2c:
    // 0x152a2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x152a2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152a30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x152a30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x152a34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x152a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152a38: 0x3e00008  jr          $ra
    ctx->pc = 0x152A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A38u;
        // 0x152a3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152A40u;
}
