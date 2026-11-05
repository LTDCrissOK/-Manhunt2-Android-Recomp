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

// Function: sub_003D0EB8
// Address: 0x3d0eb8 - 0x3d0f68
void sub_003D0EB8_0x3d0eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D0EB8_0x3d0eb8");
#endif

    switch (ctx->pc) {
        case 0x3d0f20u: goto label_3d0f20;
        case 0x3d0f44u: goto label_3d0f44;
        case 0x3d0f4cu: goto label_3d0f4c;
        default: break;
    }

    ctx->pc = 0x3d0eb8u;

    // 0x3d0eb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d0eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d0ebc: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x3d0ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x3d0ec0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d0ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d0ec4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d0ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d0ec8: 0x28180  sll         $s0, $v0, 6
    ctx->pc = 0x3d0ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3d0ecc: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D0ECCu;
    {
        const bool branch_taken_0x3d0ecc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3D0ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0ECCu;
        // 0x3d0ed0: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0ecc) {
            ctx->pc = 0x3D0EE4u;
            goto label_3d0ee4;
        }
    }
    ctx->pc = 0x3D0ED4u;
    // 0x3d0ed4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3d0ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3d0ed8: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x3d0ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x3d0edc: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D0EDCu;
    {
        const bool branch_taken_0x3d0edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d0edc) {
            ctx->pc = 0x3D0EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D0EDCu;
            // 0x3d0ee0: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D0EF0u;
            goto label_3d0ef0;
        }
    }
    ctx->pc = 0x3D0EE4u;
label_3d0ee4:
    // 0x3d0ee4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3d0ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3d0ee8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3D0EE8u;
    {
        const bool branch_taken_0x3d0ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0EE8u;
        // 0x3d0eec: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0ee8) {
            ctx->pc = 0x3D0F50u;
            goto label_3d0f50;
        }
    }
    ctx->pc = 0x3D0EF0u;
label_3d0ef0:
    // 0x3d0ef0: 0x2442e640  addiu       $v0, $v0, -0x19C0
    ctx->pc = 0x3d0ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960704));
    // 0x3d0ef4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x3d0ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x3d0ef8: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D0EF8u;
    {
        const bool branch_taken_0x3d0ef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3d0ef8) {
            ctx->pc = 0x3D0EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D0EF8u;
            // 0x3d0efc: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D0F0Cu;
            goto label_3d0f0c;
        }
    }
    ctx->pc = 0x3D0F00u;
    // 0x3d0f00: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3d0f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3d0f04: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3D0F04u;
    {
        const bool branch_taken_0x3d0f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0F04u;
        // 0x3d0f08: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0f04) {
            ctx->pc = 0x3D0F50u;
            goto label_3d0f50;
        }
    }
    ctx->pc = 0x3D0F0Cu;
label_3d0f0c:
    // 0x3d0f0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d0f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3d0f10: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3D0F10u;
    {
        const bool branch_taken_0x3d0f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D0F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0F10u;
        // 0x3d0f14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0f10) {
            ctx->pc = 0x3D0F50u;
            goto label_3d0f50;
        }
    }
    ctx->pc = 0x3D0F18u;
    // 0x3d0f18: 0xc0f4366  jal         func_3D0D98
    ctx->pc = 0x3D0F18u;
    SET_GPR_U32(ctx, 31, 0x3D0F20u);
    ctx->pc = 0x3D0D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0D98u, 0x3D0F18u, 0x3D0F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0F20u;
label_3d0f20:
    // 0x3d0f20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d0f20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0f24: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3d0f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3d0f28: 0xfe110010  sd          $s1, 0x10($s0)
    ctx->pc = 0x3d0f28u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 17));
    // 0x3d0f2c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3d0f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3d0f30: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x3d0f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3d0f34: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D0F34u;
    {
        const bool branch_taken_0x3d0f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0F34u;
        // 0x3d0f38: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0f34) {
            ctx->pc = 0x3D0F4Cu;
            goto label_3d0f4c;
        }
    }
    ctx->pc = 0x3D0F3Cu;
    // 0x3d0f3c: 0xc0f428c  jal         func_3D0A30
    ctx->pc = 0x3D0F3Cu;
    SET_GPR_U32(ctx, 31, 0x3D0F44u);
    ctx->pc = 0x3D0F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0F3Cu;
    // 0x3d0f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0A30u, 0x3D0F3Cu, 0x3D0F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0F44u;
label_3d0f44:
    // 0x3d0f44: 0xc0f4228  jal         func_3D08A0
    ctx->pc = 0x3D0F44u;
    SET_GPR_U32(ctx, 31, 0x3D0F4Cu);
    ctx->pc = 0x3D0F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0F44u;
    // 0x3d0f48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D08A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D08A0u, 0x3D0F44u, 0x3D0F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0F4Cu;
label_3d0f4c:
    // 0x3d0f4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d0f4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d0f50:
    // 0x3d0f50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d0f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d0f54: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d0f54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d0f58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d0f58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d0f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D0F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D0F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0F5Cu;
        // 0x3d0f60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D0F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D0F64u;
    // 0x3d0f64: 0x0  nop
    ctx->pc = 0x3d0f64u;
    // NOP
    ctx->pc = 0x3d0f68u;
}
