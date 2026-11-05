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

// Function: sub_0014D1A8
// Address: 0x14d1a8 - 0x14d248
void sub_0014D1A8_0x14d1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D1A8_0x14d1a8");
#endif

    switch (ctx->pc) {
        case 0x14d1dcu: goto label_14d1dc;
        case 0x14d208u: goto label_14d208;
        case 0x14d234u: goto label_14d234;
        default: break;
    }

    ctx->pc = 0x14d1a8u;

    // 0x14d1a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14d1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14d1ac: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x14d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x14d1b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14d1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14d1b4: 0x24420a68  addiu       $v0, $v0, 0xA68
    ctx->pc = 0x14d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2664));
    // 0x14d1b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14d1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14d1bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14d1bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d1c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14d1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14d1c4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x14d1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x14d1c8: 0x8e030460  lw          $v1, 0x460($s0)
    ctx->pc = 0x14d1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x14d1cc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D1CCu;
    {
        const bool branch_taken_0x14d1cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D1CCu;
        // 0x14d1d0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d1cc) {
            ctx->pc = 0x14D1DCu;
            goto label_14d1dc;
        }
    }
    ctx->pc = 0x14D1D4u;
    // 0x14d1d4: 0xc0534a6  jal         func_14D298
    ctx->pc = 0x14D1D4u;
    SET_GPR_U32(ctx, 31, 0x14D1DCu);
    ctx->pc = 0x14D298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D298u, 0x14D1D4u, 0x14D1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D1DCu;
label_14d1dc:
    // 0x14d1dc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x14d1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x14d1e0: 0x32250001  andi        $a1, $s1, 0x1
    ctx->pc = 0x14d1e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x14d1e4: 0x244205f0  addiu       $v0, $v0, 0x5F0
    ctx->pc = 0x14d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1520));
    // 0x14d1e8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x14d1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x14d1ec: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x14d1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x14d1f0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x14D1F0u;
    {
        const bool branch_taken_0x14d1f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D1F0u;
        // 0x14d1f4: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d1f0) {
            ctx->pc = 0x14D220u;
            goto label_14d220;
        }
    }
    ctx->pc = 0x14D1F8u;
    // 0x14d1f8: 0x26030410  addiu       $v1, $s0, 0x410
    ctx->pc = 0x14d1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1040));
    // 0x14d1fc: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14D1FCu;
    {
        const bool branch_taken_0x14d1fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14d1fc) {
            ctx->pc = 0x14D200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D1FCu;
            // 0x14d200: 0x24420638  addiu       $v0, $v0, 0x638 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D224u;
            goto label_14d224;
        }
    }
    ctx->pc = 0x14D204u;
    // 0x14d204: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x14d204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_14d208:
    // 0x14d208: 0x0  nop
    ctx->pc = 0x14d208u;
    // NOP
    // 0x14d20c: 0x0  nop
    ctx->pc = 0x14d20cu;
    // NOP
    // 0x14d210: 0x0  nop
    ctx->pc = 0x14d210u;
    // NOP
    // 0x14d214: 0x0  nop
    ctx->pc = 0x14d214u;
    // NOP
    // 0x14d218: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14D218u;
    {
        const bool branch_taken_0x14d218 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14d218) {
            ctx->pc = 0x14D21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D218u;
            // 0x14d21c: 0x2463ffc0  addiu       $v1, $v1, -0x40 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d208;
        }
    }
    ctx->pc = 0x14D220u;
label_14d220:
    // 0x14d220: 0x24420638  addiu       $v0, $v0, 0x638
    ctx->pc = 0x14d220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
label_14d224:
    // 0x14d224: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D224u;
    {
        const bool branch_taken_0x14d224 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D224u;
        // 0x14d228: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d224) {
            ctx->pc = 0x14D234u;
            goto label_14d234;
        }
    }
    ctx->pc = 0x14D22Cu;
    // 0x14d22c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x14D22Cu;
    SET_GPR_U32(ctx, 31, 0x14D234u);
    ctx->pc = 0x14D230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D22Cu;
    // 0x14d230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x14D22Cu, 0x14D234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D234u;
label_14d234:
    // 0x14d234: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14d234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d238: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14d238u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14d23c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14d23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d240: 0x3e00008  jr          $ra
    ctx->pc = 0x14D240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D240u;
        // 0x14d244: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D248u;
}
