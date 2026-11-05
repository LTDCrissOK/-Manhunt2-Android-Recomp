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

// Function: sub_002D4E70
// Address: 0x2d4e70 - 0x2d4fc8
void sub_002D4E70_0x2d4e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4E70_0x2d4e70");
#endif

    switch (ctx->pc) {
        case 0x2d4e70u: goto label_2d4e70;
        case 0x2d4e74u: goto label_2d4e74;
        case 0x2d4e78u: goto label_2d4e78;
        case 0x2d4e7cu: goto label_2d4e7c;
        case 0x2d4e80u: goto label_2d4e80;
        case 0x2d4e84u: goto label_2d4e84;
        case 0x2d4e88u: goto label_2d4e88;
        case 0x2d4e8cu: goto label_2d4e8c;
        case 0x2d4e90u: goto label_2d4e90;
        case 0x2d4e94u: goto label_2d4e94;
        case 0x2d4e98u: goto label_2d4e98;
        case 0x2d4e9cu: goto label_2d4e9c;
        case 0x2d4ea0u: goto label_2d4ea0;
        case 0x2d4ea4u: goto label_2d4ea4;
        case 0x2d4ea8u: goto label_2d4ea8;
        case 0x2d4eacu: goto label_2d4eac;
        case 0x2d4eb0u: goto label_2d4eb0;
        case 0x2d4eb4u: goto label_2d4eb4;
        case 0x2d4eb8u: goto label_2d4eb8;
        case 0x2d4ebcu: goto label_2d4ebc;
        case 0x2d4ec0u: goto label_2d4ec0;
        case 0x2d4ec4u: goto label_2d4ec4;
        case 0x2d4ec8u: goto label_2d4ec8;
        case 0x2d4eccu: goto label_2d4ecc;
        case 0x2d4ed0u: goto label_2d4ed0;
        case 0x2d4ed4u: goto label_2d4ed4;
        case 0x2d4ed8u: goto label_2d4ed8;
        case 0x2d4edcu: goto label_2d4edc;
        case 0x2d4ee0u: goto label_2d4ee0;
        case 0x2d4ee4u: goto label_2d4ee4;
        case 0x2d4ee8u: goto label_2d4ee8;
        case 0x2d4eecu: goto label_2d4eec;
        case 0x2d4ef0u: goto label_2d4ef0;
        case 0x2d4ef4u: goto label_2d4ef4;
        case 0x2d4ef8u: goto label_2d4ef8;
        case 0x2d4efcu: goto label_2d4efc;
        case 0x2d4f00u: goto label_2d4f00;
        case 0x2d4f04u: goto label_2d4f04;
        case 0x2d4f08u: goto label_2d4f08;
        case 0x2d4f0cu: goto label_2d4f0c;
        case 0x2d4f10u: goto label_2d4f10;
        case 0x2d4f14u: goto label_2d4f14;
        case 0x2d4f18u: goto label_2d4f18;
        case 0x2d4f1cu: goto label_2d4f1c;
        case 0x2d4f20u: goto label_2d4f20;
        case 0x2d4f24u: goto label_2d4f24;
        case 0x2d4f28u: goto label_2d4f28;
        case 0x2d4f2cu: goto label_2d4f2c;
        case 0x2d4f30u: goto label_2d4f30;
        case 0x2d4f34u: goto label_2d4f34;
        case 0x2d4f38u: goto label_2d4f38;
        case 0x2d4f3cu: goto label_2d4f3c;
        case 0x2d4f40u: goto label_2d4f40;
        case 0x2d4f44u: goto label_2d4f44;
        case 0x2d4f48u: goto label_2d4f48;
        case 0x2d4f4cu: goto label_2d4f4c;
        case 0x2d4f50u: goto label_2d4f50;
        case 0x2d4f54u: goto label_2d4f54;
        case 0x2d4f58u: goto label_2d4f58;
        case 0x2d4f5cu: goto label_2d4f5c;
        case 0x2d4f60u: goto label_2d4f60;
        case 0x2d4f64u: goto label_2d4f64;
        case 0x2d4f68u: goto label_2d4f68;
        case 0x2d4f6cu: goto label_2d4f6c;
        case 0x2d4f70u: goto label_2d4f70;
        case 0x2d4f74u: goto label_2d4f74;
        case 0x2d4f78u: goto label_2d4f78;
        case 0x2d4f7cu: goto label_2d4f7c;
        case 0x2d4f80u: goto label_2d4f80;
        case 0x2d4f84u: goto label_2d4f84;
        case 0x2d4f88u: goto label_2d4f88;
        case 0x2d4f8cu: goto label_2d4f8c;
        case 0x2d4f90u: goto label_2d4f90;
        case 0x2d4f94u: goto label_2d4f94;
        case 0x2d4f98u: goto label_2d4f98;
        case 0x2d4f9cu: goto label_2d4f9c;
        case 0x2d4fa0u: goto label_2d4fa0;
        case 0x2d4fa4u: goto label_2d4fa4;
        case 0x2d4fa8u: goto label_2d4fa8;
        case 0x2d4facu: goto label_2d4fac;
        case 0x2d4fb0u: goto label_2d4fb0;
        case 0x2d4fb4u: goto label_2d4fb4;
        case 0x2d4fb8u: goto label_2d4fb8;
        case 0x2d4fbcu: goto label_2d4fbc;
        case 0x2d4fc0u: goto label_2d4fc0;
        case 0x2d4fc4u: goto label_2d4fc4;
        default: break;
    }

    ctx->pc = 0x2d4e70u;

label_2d4e70:
    // 0x2d4e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d4e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d4e74:
    // 0x2d4e74: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2d4e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_2d4e78:
    // 0x2d4e78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d4e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2d4e7c:
    // 0x2d4e7c: 0x24423de8  addiu       $v0, $v0, 0x3DE8
    ctx->pc = 0x2d4e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15848));
label_2d4e80:
    // 0x2d4e80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d4e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2d4e84:
    // 0x2d4e84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d4e84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d4e88:
    // 0x2d4e88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d4e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d4e8c:
    // 0x2d4e8c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d4e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2d4e90:
    // 0x2d4e90: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x2d4e90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_2d4e94:
    // 0x2d4e94: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x2d4e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2d4e98:
    // 0x2d4e98: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
label_2d4e9c:
    if (ctx->pc == 0x2D4E9Cu) {
        ctx->pc = 0x2D4E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4E98u;
        // 0x2d4e9c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4EA0u;
        goto label_2d4ea0;
    }
    ctx->pc = 0x2D4E98u;
    {
        const bool branch_taken_0x2d4e98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4E98u;
        // 0x2d4e9c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4e98) {
            ctx->pc = 0x2D4EF0u;
            goto label_2d4ef0;
        }
    }
    ctx->pc = 0x2D4EA0u;
label_2d4ea0:
    // 0x2d4ea0: 0x8cc3fff0  lw          $v1, -0x10($a2)
    ctx->pc = 0x2d4ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967280)));
label_2d4ea4:
    // 0x2d4ea4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2d4ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2d4ea8:
    // 0x2d4ea8: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x2d4ea8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2d4eac:
    // 0x2d4eac: 0x868021  addu        $s0, $a0, $a2
    ctx->pc = 0x2d4eacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2d4eb0:
    // 0x2d4eb0: 0x50d0000c  beql        $a2, $s0, . + 4 + (0xC << 2)
label_2d4eb4:
    if (ctx->pc == 0x2D4EB4u) {
        ctx->pc = 0x2D4EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4EB0u;
        // 0x2d4eb4: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4EB8u;
        goto label_2d4eb8;
    }
    ctx->pc = 0x2D4EB0u;
    {
        const bool branch_taken_0x2d4eb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 16));
        if (branch_taken_0x2d4eb0) {
            ctx->pc = 0x2D4EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4EB0u;
            // 0x2d4eb4: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4EE4u;
            goto label_2d4ee4;
        }
    }
    ctx->pc = 0x2D4EB8u;
label_2d4eb8:
    // 0x2d4eb8: 0x2610fff4  addiu       $s0, $s0, -0xC
    ctx->pc = 0x2d4eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
label_2d4ebc:
    // 0x2d4ebc: 0x0  nop
    ctx->pc = 0x2d4ebcu;
    // NOP
label_2d4ec0:
    // 0x2d4ec0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d4ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d4ec4:
    // 0x2d4ec4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2d4ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2d4ec8:
    // 0x2d4ec8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2d4ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2d4ecc:
    // 0x2d4ecc: 0x60f809  jalr        $v1
label_2d4ed0:
    if (ctx->pc == 0x2D4ED0u) {
        ctx->pc = 0x2D4ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4ECCu;
        // 0x2d4ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4ED4u;
        goto label_2d4ed4;
    }
    ctx->pc = 0x2D4ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2D4ED4u);
        ctx->pc = 0x2D4ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4ECCu;
        // 0x2d4ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4ECCu, 0x2D4ED4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D4ED4u;
label_2d4ed4:
    // 0x2d4ed4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2d4ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2d4ed8:
    // 0x2d4ed8: 0x5450fff9  bnel        $v0, $s0, . + 4 + (-0x7 << 2)
label_2d4edc:
    if (ctx->pc == 0x2D4EDCu) {
        ctx->pc = 0x2D4EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4ED8u;
        // 0x2d4edc: 0x2610fff4  addiu       $s0, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4EE0u;
        goto label_2d4ee0;
    }
    ctx->pc = 0x2D4ED8u;
    {
        const bool branch_taken_0x2d4ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2d4ed8) {
            ctx->pc = 0x2D4EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4ED8u;
            // 0x2d4edc: 0x2610fff4  addiu       $s0, $s0, -0xC (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d4ec0;
        }
    }
    ctx->pc = 0x2D4EE0u;
label_2d4ee0:
    // 0x2d4ee0: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x2d4ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2d4ee4:
    // 0x2d4ee4: 0xc0f528a  jal         func_3D4A28
label_2d4ee8:
    if (ctx->pc == 0x2D4EE8u) {
        ctx->pc = 0x2D4EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4EE4u;
        // 0x2d4ee8: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4EECu;
        goto label_2d4eec;
    }
    ctx->pc = 0x2D4EE4u;
    SET_GPR_U32(ctx, 31, 0x2D4EECu);
    ctx->pc = 0x2D4EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4EE4u;
    // 0x2d4ee8: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2D4EE4u, 0x2D4EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4EECu;
label_2d4eec:
    // 0x2d4eec: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x2d4eecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_2d4ef0:
    // 0x2d4ef0: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x2d4ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2d4ef4:
    // 0x2d4ef4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2d4ef8:
    if (ctx->pc == 0x2D4EF8u) {
        ctx->pc = 0x2D4EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4EF4u;
        // 0x2d4ef8: 0x8e25002c  lw          $a1, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4EFCu;
        goto label_2d4efc;
    }
    ctx->pc = 0x2D4EF4u;
    {
        const bool branch_taken_0x2d4ef4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4ef4) {
            ctx->pc = 0x2D4EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4EF4u;
            // 0x2d4ef8: 0x8e25002c  lw          $a1, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4F0Cu;
            goto label_2d4f0c;
        }
    }
    ctx->pc = 0x2D4EFCu;
label_2d4efc:
    // 0x2d4efc: 0xc0f528a  jal         func_3D4A28
label_2d4f00:
    if (ctx->pc == 0x2D4F00u) {
        ctx->pc = 0x2D4F04u;
        goto label_2d4f04;
    }
    ctx->pc = 0x2D4EFCu;
    SET_GPR_U32(ctx, 31, 0x2D4F04u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2D4EFCu, 0x2D4F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4F04u;
label_2d4f04:
    // 0x2d4f04: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x2d4f04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_2d4f08:
    // 0x2d4f08: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x2d4f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2d4f0c:
    // 0x2d4f0c: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
label_2d4f10:
    if (ctx->pc == 0x2D4F10u) {
        ctx->pc = 0x2D4F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4F0Cu;
        // 0x2d4f10: 0x240201c4  addiu       $v0, $zero, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4F14u;
        goto label_2d4f14;
    }
    ctx->pc = 0x2D4F0Cu;
    {
        const bool branch_taken_0x2d4f0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4F0Cu;
        // 0x2d4f10: 0x240201c4  addiu       $v0, $zero, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4f0c) {
            ctx->pc = 0x2D4F60u;
            goto label_2d4f60;
        }
    }
    ctx->pc = 0x2D4F14u;
label_2d4f14:
    // 0x2d4f14: 0x8ca3fff0  lw          $v1, -0x10($a1)
    ctx->pc = 0x2d4f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967280)));
label_2d4f18:
    // 0x2d4f18: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x2d4f18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2d4f1c:
    // 0x2d4f1c: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x2d4f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2d4f20:
    // 0x2d4f20: 0x50b0000c  beql        $a1, $s0, . + 4 + (0xC << 2)
label_2d4f24:
    if (ctx->pc == 0x2D4F24u) {
        ctx->pc = 0x2D4F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4F20u;
        // 0x2d4f24: 0x8e24002c  lw          $a0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4F28u;
        goto label_2d4f28;
    }
    ctx->pc = 0x2D4F20u;
    {
        const bool branch_taken_0x2d4f20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        if (branch_taken_0x2d4f20) {
            ctx->pc = 0x2D4F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4F20u;
            // 0x2d4f24: 0x8e24002c  lw          $a0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4F54u;
            goto label_2d4f54;
        }
    }
    ctx->pc = 0x2D4F28u;
label_2d4f28:
    // 0x2d4f28: 0x2610fe3c  addiu       $s0, $s0, -0x1C4
    ctx->pc = 0x2d4f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966844));
label_2d4f2c:
    // 0x2d4f2c: 0x0  nop
    ctx->pc = 0x2d4f2cu;
    // NOP
label_2d4f30:
    // 0x2d4f30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d4f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d4f34:
    // 0x2d4f34: 0x8e0201c0  lw          $v0, 0x1C0($s0)
    ctx->pc = 0x2d4f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_2d4f38:
    // 0x2d4f38: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2d4f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2d4f3c:
    // 0x2d4f3c: 0x60f809  jalr        $v1
label_2d4f40:
    if (ctx->pc == 0x2D4F40u) {
        ctx->pc = 0x2D4F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4F3Cu;
        // 0x2d4f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4F44u;
        goto label_2d4f44;
    }
    ctx->pc = 0x2D4F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2D4F44u);
        ctx->pc = 0x2D4F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4F3Cu;
        // 0x2d4f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4F3Cu, 0x2D4F44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D4F44u;
label_2d4f44:
    // 0x2d4f44: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x2d4f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2d4f48:
    // 0x2d4f48: 0x5450fff9  bnel        $v0, $s0, . + 4 + (-0x7 << 2)
label_2d4f4c:
    if (ctx->pc == 0x2D4F4Cu) {
        ctx->pc = 0x2D4F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4F48u;
        // 0x2d4f4c: 0x2610fe3c  addiu       $s0, $s0, -0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966844));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4F50u;
        goto label_2d4f50;
    }
    ctx->pc = 0x2D4F48u;
    {
        const bool branch_taken_0x2d4f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2d4f48) {
            ctx->pc = 0x2D4F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4F48u;
            // 0x2d4f4c: 0x2610fe3c  addiu       $s0, $s0, -0x1C4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966844));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d4f30;
        }
    }
    ctx->pc = 0x2D4F50u;
label_2d4f50:
    // 0x2d4f50: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x2d4f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2d4f54:
    // 0x2d4f54: 0xc0f528a  jal         func_3D4A28
label_2d4f58:
    if (ctx->pc == 0x2D4F58u) {
        ctx->pc = 0x2D4F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4F54u;
        // 0x2d4f58: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4F5Cu;
        goto label_2d4f5c;
    }
    ctx->pc = 0x2D4F54u;
    SET_GPR_U32(ctx, 31, 0x2D4F5Cu);
    ctx->pc = 0x2D4F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4F54u;
    // 0x2d4f58: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2D4F54u, 0x2D4F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4F5Cu;
label_2d4f5c:
    // 0x2d4f5c: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x2d4f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_2d4f60:
    // 0x2d4f60: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x2d4f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2d4f64:
    // 0x2d4f64: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_2d4f68:
    if (ctx->pc == 0x2D4F68u) {
        ctx->pc = 0x2D4F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4F64u;
        // 0x2d4f68: 0x8e240034  lw          $a0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4F6Cu;
        goto label_2d4f6c;
    }
    ctx->pc = 0x2D4F64u;
    {
        const bool branch_taken_0x2d4f64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4f64) {
            ctx->pc = 0x2D4F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4F64u;
            // 0x2d4f68: 0x8e240034  lw          $a0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4F84u;
            goto label_2d4f84;
        }
    }
    ctx->pc = 0x2D4F6Cu;
label_2d4f6c:
    // 0x2d4f6c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2d4f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2d4f70:
    // 0x2d4f70: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2d4f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2d4f74:
    // 0x2d4f74: 0x40f809  jalr        $v0
label_2d4f78:
    if (ctx->pc == 0x2D4F78u) {
        ctx->pc = 0x2D4F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4F74u;
        // 0x2d4f78: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4F7Cu;
        goto label_2d4f7c;
    }
    ctx->pc = 0x2D4F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D4F7Cu);
        ctx->pc = 0x2D4F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4F74u;
        // 0x2d4f78: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4F74u, 0x2D4F7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D4F7Cu;
label_2d4f7c:
    // 0x2d4f7c: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x2d4f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_2d4f80:
    // 0x2d4f80: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x2d4f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2d4f84:
    // 0x2d4f84: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2d4f88:
    if (ctx->pc == 0x2D4F88u) {
        ctx->pc = 0x2D4F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4F84u;
        // 0x2d4f88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4F8Cu;
        goto label_2d4f8c;
    }
    ctx->pc = 0x2D4F84u;
    {
        const bool branch_taken_0x2d4f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4f84) {
            ctx->pc = 0x2D4F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4F84u;
            // 0x2d4f88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D4F9Cu;
            goto label_2d4f9c;
        }
    }
    ctx->pc = 0x2D4F8Cu;
label_2d4f8c:
    // 0x2d4f8c: 0xc0c7a32  jal         func_31E8C8
label_2d4f90:
    if (ctx->pc == 0x2D4F90u) {
        ctx->pc = 0x2D4F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4F8Cu;
        // 0x2d4f90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4F94u;
        goto label_2d4f94;
    }
    ctx->pc = 0x2D4F8Cu;
    SET_GPR_U32(ctx, 31, 0x2D4F94u);
    ctx->pc = 0x2D4F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4F8Cu;
    // 0x2d4f90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C8u, 0x2D4F8Cu, 0x2D4F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4F94u;
label_2d4f94:
    // 0x2d4f94: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x2d4f94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_2d4f98:
    // 0x2d4f98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d4f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d4f9c:
    // 0x2d4f9c: 0xc0b535e  jal         func_2D4D78
label_2d4fa0:
    if (ctx->pc == 0x2D4FA0u) {
        ctx->pc = 0x2D4FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4F9Cu;
        // 0x2d4fa0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4FA4u;
        goto label_2d4fa4;
    }
    ctx->pc = 0x2D4F9Cu;
    SET_GPR_U32(ctx, 31, 0x2D4FA4u);
    ctx->pc = 0x2D4FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4F9Cu;
    // 0x2d4fa0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4D78u, 0x2D4F9Cu, 0x2D4FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4FA4u;
label_2d4fa4:
    // 0x2d4fa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d4fa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d4fa8:
    // 0x2d4fa8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d4fa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d4fac:
    // 0x2d4fac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d4facu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d4fb0:
    // 0x2d4fb0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d4fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d4fb4:
    // 0x2d4fb4: 0x3e00008  jr          $ra
label_2d4fb8:
    if (ctx->pc == 0x2D4FB8u) {
        ctx->pc = 0x2D4FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4FB4u;
        // 0x2d4fb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4FBCu;
        goto label_2d4fbc;
    }
    ctx->pc = 0x2D4FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4FB4u;
        // 0x2d4fb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4FBCu;
label_2d4fbc:
    // 0x2d4fbc: 0x0  nop
    ctx->pc = 0x2d4fbcu;
    // NOP
label_2d4fc0:
    // 0x2d4fc0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d4fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2d4fc4:
    // 0x2d4fc4: 0x0  nop
    ctx->pc = 0x2d4fc4u;
    // NOP
    ctx->pc = 0x2d4fc8u;
}
