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

// Function: sub_00351EB0
// Address: 0x351eb0 - 0x352008
void sub_00351EB0_0x351eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351EB0_0x351eb0");
#endif

    switch (ctx->pc) {
        case 0x351eb0u: goto label_351eb0;
        case 0x351eb4u: goto label_351eb4;
        case 0x351eb8u: goto label_351eb8;
        case 0x351ebcu: goto label_351ebc;
        case 0x351ec0u: goto label_351ec0;
        case 0x351ec4u: goto label_351ec4;
        case 0x351ec8u: goto label_351ec8;
        case 0x351eccu: goto label_351ecc;
        case 0x351ed0u: goto label_351ed0;
        case 0x351ed4u: goto label_351ed4;
        case 0x351ed8u: goto label_351ed8;
        case 0x351edcu: goto label_351edc;
        case 0x351ee0u: goto label_351ee0;
        case 0x351ee4u: goto label_351ee4;
        case 0x351ee8u: goto label_351ee8;
        case 0x351eecu: goto label_351eec;
        case 0x351ef0u: goto label_351ef0;
        case 0x351ef4u: goto label_351ef4;
        case 0x351ef8u: goto label_351ef8;
        case 0x351efcu: goto label_351efc;
        case 0x351f00u: goto label_351f00;
        case 0x351f04u: goto label_351f04;
        case 0x351f08u: goto label_351f08;
        case 0x351f0cu: goto label_351f0c;
        case 0x351f10u: goto label_351f10;
        case 0x351f14u: goto label_351f14;
        case 0x351f18u: goto label_351f18;
        case 0x351f1cu: goto label_351f1c;
        case 0x351f20u: goto label_351f20;
        case 0x351f24u: goto label_351f24;
        case 0x351f28u: goto label_351f28;
        case 0x351f2cu: goto label_351f2c;
        case 0x351f30u: goto label_351f30;
        case 0x351f34u: goto label_351f34;
        case 0x351f38u: goto label_351f38;
        case 0x351f3cu: goto label_351f3c;
        case 0x351f40u: goto label_351f40;
        case 0x351f44u: goto label_351f44;
        case 0x351f48u: goto label_351f48;
        case 0x351f4cu: goto label_351f4c;
        case 0x351f50u: goto label_351f50;
        case 0x351f54u: goto label_351f54;
        case 0x351f58u: goto label_351f58;
        case 0x351f5cu: goto label_351f5c;
        case 0x351f60u: goto label_351f60;
        case 0x351f64u: goto label_351f64;
        case 0x351f68u: goto label_351f68;
        case 0x351f6cu: goto label_351f6c;
        case 0x351f70u: goto label_351f70;
        case 0x351f74u: goto label_351f74;
        case 0x351f78u: goto label_351f78;
        case 0x351f7cu: goto label_351f7c;
        case 0x351f80u: goto label_351f80;
        case 0x351f84u: goto label_351f84;
        case 0x351f88u: goto label_351f88;
        case 0x351f8cu: goto label_351f8c;
        case 0x351f90u: goto label_351f90;
        case 0x351f94u: goto label_351f94;
        case 0x351f98u: goto label_351f98;
        case 0x351f9cu: goto label_351f9c;
        case 0x351fa0u: goto label_351fa0;
        case 0x351fa4u: goto label_351fa4;
        case 0x351fa8u: goto label_351fa8;
        case 0x351facu: goto label_351fac;
        case 0x351fb0u: goto label_351fb0;
        case 0x351fb4u: goto label_351fb4;
        case 0x351fb8u: goto label_351fb8;
        case 0x351fbcu: goto label_351fbc;
        case 0x351fc0u: goto label_351fc0;
        case 0x351fc4u: goto label_351fc4;
        case 0x351fc8u: goto label_351fc8;
        case 0x351fccu: goto label_351fcc;
        case 0x351fd0u: goto label_351fd0;
        case 0x351fd4u: goto label_351fd4;
        case 0x351fd8u: goto label_351fd8;
        case 0x351fdcu: goto label_351fdc;
        case 0x351fe0u: goto label_351fe0;
        case 0x351fe4u: goto label_351fe4;
        case 0x351fe8u: goto label_351fe8;
        case 0x351fecu: goto label_351fec;
        case 0x351ff0u: goto label_351ff0;
        case 0x351ff4u: goto label_351ff4;
        case 0x351ff8u: goto label_351ff8;
        case 0x351ffcu: goto label_351ffc;
        case 0x352000u: goto label_352000;
        case 0x352004u: goto label_352004;
        default: break;
    }

    ctx->pc = 0x351eb0u;

label_351eb0:
    // 0x351eb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x351eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_351eb4:
    // 0x351eb4: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x351eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_351eb8:
    // 0x351eb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x351eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_351ebc:
    // 0x351ebc: 0x2444be50  addiu       $a0, $v0, -0x41B0
    ctx->pc = 0x351ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950480));
label_351ec0:
    // 0x351ec0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x351ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_351ec4:
    // 0x351ec4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x351ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_351ec8:
    // 0x351ec8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x351ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_351ecc:
    // 0x351ecc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x351eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_351ed0:
    // 0x351ed0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x351ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_351ed4:
    // 0x351ed4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x351ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_351ed8:
    // 0x351ed8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x351ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_351edc:
    // 0x351edc: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x351edcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_351ee0:
    // 0x351ee0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x351ee0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_351ee4:
    // 0x351ee4: 0x3c13005c  lui         $s3, 0x5C
    ctx->pc = 0x351ee4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)92 << 16));
label_351ee8:
    // 0x351ee8: 0x1000000f  b           . + 4 + (0xF << 2)
label_351eec:
    if (ctx->pc == 0x351EECu) {
        ctx->pc = 0x351EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351EE8u;
        // 0x351eec: 0x3c15005c  lui         $s5, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351EF0u;
        goto label_351ef0;
    }
    ctx->pc = 0x351EE8u;
    {
        const bool branch_taken_0x351ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351EE8u;
        // 0x351eec: 0x3c15005c  lui         $s5, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351ee8) {
            ctx->pc = 0x351F28u;
            goto label_351f28;
        }
    }
    ctx->pc = 0x351EF0u;
label_351ef0:
    // 0x351ef0: 0xc0f754a  jal         func_3DD528
label_351ef4:
    if (ctx->pc == 0x351EF4u) {
        ctx->pc = 0x351EF8u;
        goto label_351ef8;
    }
    ctx->pc = 0x351EF0u;
    SET_GPR_U32(ctx, 31, 0x351EF8u);
    ctx->pc = 0x3DD528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD528u, 0x351EF0u, 0x351EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351EF8u;
label_351ef8:
    // 0x351ef8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_351efc:
    if (ctx->pc == 0x351EFCu) {
        ctx->pc = 0x351EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351EF8u;
        // 0x351efc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351F00u;
        goto label_351f00;
    }
    ctx->pc = 0x351EF8u;
    {
        const bool branch_taken_0x351ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351EF8u;
        // 0x351efc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351ef8) {
            ctx->pc = 0x351F08u;
            goto label_351f08;
        }
    }
    ctx->pc = 0x351F00u;
label_351f00:
    // 0x351f00: 0xc0fbc38  jal         func_3EF0E0
label_351f04:
    if (ctx->pc == 0x351F04u) {
        ctx->pc = 0x351F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F00u;
        // 0x351f04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351F08u;
        goto label_351f08;
    }
    ctx->pc = 0x351F00u;
    SET_GPR_U32(ctx, 31, 0x351F08u);
    ctx->pc = 0x351F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351F00u;
    // 0x351f04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF0E0u, 0x351F00u, 0x351F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351F08u;
label_351f08:
    // 0x351f08: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x351f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_351f0c:
    // 0x351f0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x351f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_351f10:
    // 0x351f10: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x351f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_351f14:
    // 0x351f14: 0x40f809  jalr        $v0
label_351f18:
    if (ctx->pc == 0x351F18u) {
        ctx->pc = 0x351F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F14u;
        // 0x351f18: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351F1Cu;
        goto label_351f1c;
    }
    ctx->pc = 0x351F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x351F1Cu);
        ctx->pc = 0x351F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F14u;
        // 0x351f18: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351F14u, 0x351F1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x351F1Cu;
label_351f1c:
    // 0x351f1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x351f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_351f20:
    // 0x351f20: 0xc0fbc98  jal         func_3EF260
label_351f24:
    if (ctx->pc == 0x351F24u) {
        ctx->pc = 0x351F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F20u;
        // 0x351f24: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351F28u;
        goto label_351f28;
    }
    ctx->pc = 0x351F20u;
    SET_GPR_U32(ctx, 31, 0x351F28u);
    ctx->pc = 0x351F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351F20u;
    // 0x351f24: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF260u, 0x351F20u, 0x351F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351F28u;
label_351f28:
    // 0x351f28: 0x2692be50  addiu       $s2, $s4, -0x41B0
    ctx->pc = 0x351f28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950480));
label_351f2c:
    // 0x351f2c: 0x2671be60  addiu       $s1, $s3, -0x41A0
    ctx->pc = 0x351f2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950496));
label_351f30:
    // 0x351f30: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x351f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_351f34:
    // 0x351f34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x351f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_351f38:
    // 0x351f38: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_351f3c:
    if (ctx->pc == 0x351F3Cu) {
        ctx->pc = 0x351F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F38u;
        // 0x351f3c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351F40u;
        goto label_351f40;
    }
    ctx->pc = 0x351F38u;
    {
        const bool branch_taken_0x351f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F38u;
        // 0x351f3c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351f38) {
            ctx->pc = 0x351F44u;
            goto label_351f44;
        }
    }
    ctx->pc = 0x351F40u;
label_351f40:
    // 0x351f40: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x351f40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_351f44:
    // 0x351f44: 0x1600ffea  bnez        $s0, . + 4 + (-0x16 << 2)
label_351f48:
    if (ctx->pc == 0x351F48u) {
        ctx->pc = 0x351F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F44u;
        // 0x351f48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351F4Cu;
        goto label_351f4c;
    }
    ctx->pc = 0x351F44u;
    {
        const bool branch_taken_0x351f44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x351F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F44u;
        // 0x351f48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351f44) {
            ctx->pc = 0x351EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351ef0;
        }
    }
    ctx->pc = 0x351F4Cu;
label_351f4c:
    // 0x351f4c: 0x2662be60  addiu       $v0, $s3, -0x41A0
    ctx->pc = 0x351f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950496));
label_351f50:
    // 0x351f50: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x351f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_351f54:
    // 0x351f54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x351f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_351f58:
    // 0x351f58: 0x10000008  b           . + 4 + (0x8 << 2)
label_351f5c:
    if (ctx->pc == 0x351F5Cu) {
        ctx->pc = 0x351F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F58u;
        // 0x351f5c: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351F60u;
        goto label_351f60;
    }
    ctx->pc = 0x351F58u;
    {
        const bool branch_taken_0x351f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F58u;
        // 0x351f5c: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351f58) {
            ctx->pc = 0x351F7Cu;
            goto label_351f7c;
        }
    }
    ctx->pc = 0x351F60u;
label_351f60:
    // 0x351f60: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x351f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_351f64:
    // 0x351f64: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x351f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_351f68:
    // 0x351f68: 0x60f809  jalr        $v1
label_351f6c:
    if (ctx->pc == 0x351F6Cu) {
        ctx->pc = 0x351F70u;
        goto label_351f70;
    }
    ctx->pc = 0x351F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x351F70u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351F68u, 0x351F70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x351F70u;
label_351f70:
    // 0x351f70: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x351f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_351f74:
    // 0x351f74: 0xc0fbc98  jal         func_3EF260
label_351f78:
    if (ctx->pc == 0x351F78u) {
        ctx->pc = 0x351F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F74u;
        // 0x351f78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351F7Cu;
        goto label_351f7c;
    }
    ctx->pc = 0x351F74u;
    SET_GPR_U32(ctx, 31, 0x351F7Cu);
    ctx->pc = 0x351F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351F74u;
    // 0x351f78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF260u, 0x351F74u, 0x351F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351F7Cu;
label_351f7c:
    // 0x351f7c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x351f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_351f80:
    // 0x351f80: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x351f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_351f84:
    // 0x351f84: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_351f88:
    if (ctx->pc == 0x351F88u) {
        ctx->pc = 0x351F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F84u;
        // 0x351f88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351F8Cu;
        goto label_351f8c;
    }
    ctx->pc = 0x351F84u;
    {
        const bool branch_taken_0x351f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F84u;
        // 0x351f88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351f84) {
            ctx->pc = 0x351F90u;
            goto label_351f90;
        }
    }
    ctx->pc = 0x351F8Cu;
label_351f8c:
    // 0x351f8c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x351f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_351f90:
    // 0x351f90: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_351f94:
    if (ctx->pc == 0x351F94u) {
        ctx->pc = 0x351F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F90u;
        // 0x351f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351F98u;
        goto label_351f98;
    }
    ctx->pc = 0x351F90u;
    {
        const bool branch_taken_0x351f90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x351F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F90u;
        // 0x351f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351f90) {
            ctx->pc = 0x351F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351f60;
        }
    }
    ctx->pc = 0x351F98u;
label_351f98:
    // 0x351f98: 0x26a2be70  addiu       $v0, $s5, -0x4190
    ctx->pc = 0x351f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294950512));
label_351f9c:
    // 0x351f9c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x351f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_351fa0:
    // 0x351fa0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x351fa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_351fa4:
    // 0x351fa4: 0x10000007  b           . + 4 + (0x7 << 2)
label_351fa8:
    if (ctx->pc == 0x351FA8u) {
        ctx->pc = 0x351FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351FA4u;
        // 0x351fa8: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351FACu;
        goto label_351fac;
    }
    ctx->pc = 0x351FA4u;
    {
        const bool branch_taken_0x351fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351FA4u;
        // 0x351fa8: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351fa4) {
            ctx->pc = 0x351FC4u;
            goto label_351fc4;
        }
    }
    ctx->pc = 0x351FACu;
label_351fac:
    // 0x351fac: 0x0  nop
    ctx->pc = 0x351facu;
    // NOP
label_351fb0:
    // 0x351fb0: 0xc0fbc50  jal         func_3EF140
label_351fb4:
    if (ctx->pc == 0x351FB4u) {
        ctx->pc = 0x351FB8u;
        goto label_351fb8;
    }
    ctx->pc = 0x351FB0u;
    SET_GPR_U32(ctx, 31, 0x351FB8u);
    ctx->pc = 0x3EF140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF140u, 0x351FB0u, 0x351FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351FB8u;
label_351fb8:
    // 0x351fb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x351fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_351fbc:
    // 0x351fbc: 0xc0d1e40  jal         func_347900
label_351fc0:
    if (ctx->pc == 0x351FC0u) {
        ctx->pc = 0x351FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351FBCu;
        // 0x351fc0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351FC4u;
        goto label_351fc4;
    }
    ctx->pc = 0x351FBCu;
    SET_GPR_U32(ctx, 31, 0x351FC4u);
    ctx->pc = 0x351FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351FBCu;
    // 0x351fc0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347900u, 0x351FBCu, 0x351FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351FC4u;
label_351fc4:
    // 0x351fc4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x351fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_351fc8:
    // 0x351fc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x351fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_351fcc:
    // 0x351fcc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x351fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_351fd0:
    // 0x351fd0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_351fd4:
    if (ctx->pc == 0x351FD4u) {
        ctx->pc = 0x351FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351FD0u;
        // 0x351fd4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351FD8u;
        goto label_351fd8;
    }
    ctx->pc = 0x351FD0u;
    {
        const bool branch_taken_0x351fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351FD0u;
        // 0x351fd4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351fd0) {
            ctx->pc = 0x351FDCu;
            goto label_351fdc;
        }
    }
    ctx->pc = 0x351FD8u;
label_351fd8:
    // 0x351fd8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x351fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_351fdc:
    // 0x351fdc: 0x1600fff4  bnez        $s0, . + 4 + (-0xC << 2)
label_351fe0:
    if (ctx->pc == 0x351FE0u) {
        ctx->pc = 0x351FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351FDCu;
        // 0x351fe0: 0xdfb20010  ld          $s2, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351FE4u;
        goto label_351fe4;
    }
    ctx->pc = 0x351FDCu;
    {
        const bool branch_taken_0x351fdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x351FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351FDCu;
        // 0x351fe0: 0xdfb20010  ld          $s2, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351fdc) {
            ctx->pc = 0x351FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351fb0;
        }
    }
    ctx->pc = 0x351FE4u;
label_351fe4:
    // 0x351fe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x351fe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_351fe8:
    // 0x351fe8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x351fe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_351fec:
    // 0x351fec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x351fecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_351ff0:
    // 0x351ff0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x351ff0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_351ff4:
    // 0x351ff4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x351ff4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_351ff8:
    // 0x351ff8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x351ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_351ffc:
    // 0x351ffc: 0x3e00008  jr          $ra
label_352000:
    if (ctx->pc == 0x352000u) {
        ctx->pc = 0x352000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351FFCu;
        // 0x352000: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352004u;
        goto label_352004;
    }
    ctx->pc = 0x351FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351FFCu;
        // 0x352000: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352004u;
label_352004:
    // 0x352004: 0x0  nop
    ctx->pc = 0x352004u;
    // NOP
    ctx->pc = 0x352008u;
}
