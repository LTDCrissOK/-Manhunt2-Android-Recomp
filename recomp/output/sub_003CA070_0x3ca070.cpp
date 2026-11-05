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

// Function: sub_003CA070
// Address: 0x3ca070 - 0x3ca120
void sub_003CA070_0x3ca070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA070_0x3ca070");
#endif

    switch (ctx->pc) {
        case 0x3ca098u: goto label_3ca098;
        case 0x3ca0c8u: goto label_3ca0c8;
        case 0x3ca0dcu: goto label_3ca0dc;
        default: break;
    }

    ctx->pc = 0x3ca070u;

    // 0x3ca070: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3ca070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3ca074: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3ca074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3ca078: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3ca078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3ca07c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3ca07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3ca080: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ca080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ca084: 0x40116000  mfc0        $s1, Status
    ctx->pc = 0x3ca084u;
    SET_GPR_S32(ctx, 17, (int32_t)ctx->cop0_status);
    // 0x3ca088: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3ca088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3ca08c: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x3ca08cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x3ca090: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x3CA090u;
    {
        const bool branch_taken_0x3ca090 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA090u;
        // 0x3ca094: 0x3c120043  lui         $s2, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca090) {
            ctx->pc = 0x3CA0BCu;
            goto label_3ca0bc;
        }
    }
    ctx->pc = 0x3CA098u;
label_3ca098:
    // 0x3ca098: 0x42000039  di
    ctx->pc = 0x3ca098u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3ca09c: 0x40f  sync.p
    ctx->pc = 0x3ca09cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3ca0a0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3ca0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3ca0a4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3ca0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3ca0a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3ca0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3ca0ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3CA0ACu;
    {
        const bool branch_taken_0x3ca0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ca0ac) {
            ctx->pc = 0x3CA098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ca098;
        }
    }
    ctx->pc = 0x3CA0B4u;
    // 0x3ca0b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3CA0B4u;
    {
        const bool branch_taken_0x3ca0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA0B4u;
        // 0x3ca0b8: 0x8e42d5f4  lw          $v0, -0x2A0C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca0b4) {
            ctx->pc = 0x3CA0C0u;
            goto label_3ca0c0;
        }
    }
    ctx->pc = 0x3CA0BCu;
label_3ca0bc:
    // 0x3ca0bc: 0x8e42d5f4  lw          $v0, -0x2A0C($s2)
    ctx->pc = 0x3ca0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956532)));
label_3ca0c0:
    // 0x3ca0c0: 0xc0f2660  jal         func_3C9980
    ctx->pc = 0x3CA0C0u;
    SET_GPR_U32(ctx, 31, 0x3CA0C8u);
    ctx->pc = 0x3CA0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA0C0u;
    // 0x3ca0c4: 0x448021  addu        $s0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9980u, 0x3CA0C0u, 0x3CA0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA0C8u;
label_3ca0c8:
    // 0x3ca0c8: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x3ca0c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3ca0cc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3CA0CCu;
    {
        const bool branch_taken_0x3ca0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA0CCu;
        // 0x3ca0d0: 0x8e42d5f4  lw          $v0, -0x2A0C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca0cc) {
            ctx->pc = 0x3CA0F8u;
            goto label_3ca0f8;
        }
    }
    ctx->pc = 0x3CA0D4u;
    // 0x3ca0d4: 0xc0efa20  jal         func_3BE880
    ctx->pc = 0x3CA0D4u;
    SET_GPR_U32(ctx, 31, 0x3CA0DCu);
    ctx->pc = 0x3BE880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE880u, 0x3CA0D4u, 0x3CA0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA0DCu;
label_3ca0dc:
    // 0x3ca0dc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3ca0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3ca0e0: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3CA0E0u;
    {
        const bool branch_taken_0x3ca0e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA0E0u;
        // 0x3ca0e4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca0e0) {
            ctx->pc = 0x3CA0ECu;
            goto label_3ca0ec;
        }
    }
    ctx->pc = 0x3CA0E8u;
    // 0x3ca0e8: 0x42000038  ei
    ctx->pc = 0x3ca0e8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_3ca0ec:
    // 0x3ca0ec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3ca0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3ca0f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3CA0F0u;
    {
        const bool branch_taken_0x3ca0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA0F0u;
        // 0x3ca0f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca0f0) {
            ctx->pc = 0x3CA104u;
            goto label_3ca104;
        }
    }
    ctx->pc = 0x3CA0F8u;
label_3ca0f8:
    // 0x3ca0f8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3CA0F8u;
    {
        const bool branch_taken_0x3ca0f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA0F8u;
        // 0x3ca0fc: 0xae50d5f4  sw          $s0, -0x2A0C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294956532), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca0f8) {
            ctx->pc = 0x3CA104u;
            goto label_3ca104;
        }
    }
    ctx->pc = 0x3CA100u;
    // 0x3ca100: 0x42000038  ei
    ctx->pc = 0x3ca100u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_3ca104:
    // 0x3ca104: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3ca104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ca108: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3ca108u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ca10c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3ca10cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ca110: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ca110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ca114: 0x3e00008  jr          $ra
    ctx->pc = 0x3CA114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA114u;
        // 0x3ca118: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CA11Cu;
    // 0x3ca11c: 0x0  nop
    ctx->pc = 0x3ca11cu;
    // NOP
    ctx->pc = 0x3ca120u;
}
