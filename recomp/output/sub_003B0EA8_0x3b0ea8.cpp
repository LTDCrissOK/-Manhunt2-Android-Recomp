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

// Function: sub_003B0EA8
// Address: 0x3b0ea8 - 0x3b0f78
void sub_003B0EA8_0x3b0ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0EA8_0x3b0ea8");
#endif

    switch (ctx->pc) {
        case 0x3b0ed0u: goto label_3b0ed0;
        case 0x3b0f24u: goto label_3b0f24;
        case 0x3b0f4cu: goto label_3b0f4c;
        case 0x3b0f5cu: goto label_3b0f5c;
        default: break;
    }

    ctx->pc = 0x3b0ea8u;

    // 0x3b0ea8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b0ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b0eac: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x3b0eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x3b0eb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b0eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b0eb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b0eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b0eb8: 0x24834890  addiu       $v1, $a0, 0x4890
    ctx->pc = 0x3b0eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 18576));
    // 0x3b0ebc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b0ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b0ec0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3b0ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x424890u));
    // 0x3b0ec4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B0EC4u;
    {
        const bool branch_taken_0x3b0ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0EC4u;
        // 0x3b0ec8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0ec4) {
            ctx->pc = 0x3B0EF4u;
            goto label_3b0ef4;
        }
    }
    ctx->pc = 0x3B0ECCu;
    // 0x3b0ecc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3b0eccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3b0ed0:
    // 0x3b0ed0: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x3b0ed0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3b0ed4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B0ED4u;
    {
        const bool branch_taken_0x3b0ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0ED4u;
        // 0x3b0ed8: 0x2463003c  addiu       $v1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0ed4) {
            ctx->pc = 0x3B0EF4u;
            goto label_3b0ef4;
        }
    }
    ctx->pc = 0x3B0EDCu;
    // 0x3b0edc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3b0edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b0ee0: 0x0  nop
    ctx->pc = 0x3b0ee0u;
    // NOP
    // 0x3b0ee4: 0x0  nop
    ctx->pc = 0x3b0ee4u;
    // NOP
    // 0x3b0ee8: 0x0  nop
    ctx->pc = 0x3b0ee8u;
    // NOP
    // 0x3b0eec: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3B0EECu;
    {
        const bool branch_taken_0x3b0eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b0eec) {
            ctx->pc = 0x3B0EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0EECu;
            // 0x3b0ef0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b0ed0;
        }
    }
    ctx->pc = 0x3B0EF4u;
label_3b0ef4:
    // 0x3b0ef4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3b0ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b0ef8: 0x12230019  beq         $s1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3B0EF8u;
    {
        const bool branch_taken_0x3b0ef8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B0EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0EF8u;
        // 0x3b0efc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0ef8) {
            ctx->pc = 0x3B0F60u;
            goto label_3b0f60;
        }
    }
    ctx->pc = 0x3B0F00u;
    // 0x3b0f00: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x3b0f00u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x3b0f04: 0x24824890  addiu       $v0, $a0, 0x4890
    ctx->pc = 0x3b0f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 18576));
    // 0x3b0f08: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x3b0f08u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x3b0f0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b0f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0f10: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x3b0f10u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3b0f14: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x3b0f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3b0f18: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3b0f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3b0f1c: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3B0F1Cu;
    SET_GPR_U32(ctx, 31, 0x3B0F24u);
    ctx->pc = 0x3B0F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0F1Cu;
    // 0x3b0f20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3B0F1Cu, 0x3B0F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0F24u;
label_3b0f24:
    // 0x3b0f24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b0f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b0f28: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3b0f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3b0f2c: 0x240401f4  addiu       $a0, $zero, 0x1F4
    ctx->pc = 0x3b0f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x3b0f30: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x3b0f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x3b0f34: 0x3405ac44  ori         $a1, $zero, 0xAC44
    ctx->pc = 0x3b0f34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44100);
    // 0x3b0f38: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3b0f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3b0f3c: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x3b0f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3b0f40: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3b0f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x3b0f44: 0xc0ebe60  jal         func_3AF980
    ctx->pc = 0x3B0F44u;
    SET_GPR_U32(ctx, 31, 0x3B0F4Cu);
    ctx->pc = 0x3B0F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0F44u;
    // 0x3b0f48: 0x26070032  addiu       $a3, $s0, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF980u, 0x3B0F44u, 0x3B0F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0F4Cu;
label_3b0f4c:
    // 0x3b0f4c: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x3b0f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x3b0f50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b0f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0f54: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3B0F54u;
    SET_GPR_U32(ctx, 31, 0x3B0F5Cu);
    ctx->pc = 0x3B0F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0F54u;
    // 0x3b0f58: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3B0F54u, 0x3B0F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0F5Cu;
label_3b0f5c:
    // 0x3b0f5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b0f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b0f60:
    // 0x3b0f60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b0f60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b0f64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b0f64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b0f68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b0f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b0f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F6Cu;
        // 0x3b0f70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0F74u;
    // 0x3b0f74: 0x0  nop
    ctx->pc = 0x3b0f74u;
    // NOP
    ctx->pc = 0x3b0f78u;
}
