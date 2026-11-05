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

// Function: sub_003E4228
// Address: 0x3e4228 - 0x3e42b0
void sub_003E4228_0x3e4228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E4228_0x3e4228");
#endif

    switch (ctx->pc) {
        case 0x3e4228u: goto label_3e4228;
        case 0x3e422cu: goto label_3e422c;
        case 0x3e4230u: goto label_3e4230;
        case 0x3e4234u: goto label_3e4234;
        case 0x3e4238u: goto label_3e4238;
        case 0x3e423cu: goto label_3e423c;
        case 0x3e4240u: goto label_3e4240;
        case 0x3e4244u: goto label_3e4244;
        case 0x3e4248u: goto label_3e4248;
        case 0x3e424cu: goto label_3e424c;
        case 0x3e4250u: goto label_3e4250;
        case 0x3e4254u: goto label_3e4254;
        case 0x3e4258u: goto label_3e4258;
        case 0x3e425cu: goto label_3e425c;
        case 0x3e4260u: goto label_3e4260;
        case 0x3e4264u: goto label_3e4264;
        case 0x3e4268u: goto label_3e4268;
        case 0x3e426cu: goto label_3e426c;
        case 0x3e4270u: goto label_3e4270;
        case 0x3e4274u: goto label_3e4274;
        case 0x3e4278u: goto label_3e4278;
        case 0x3e427cu: goto label_3e427c;
        case 0x3e4280u: goto label_3e4280;
        case 0x3e4284u: goto label_3e4284;
        case 0x3e4288u: goto label_3e4288;
        case 0x3e428cu: goto label_3e428c;
        case 0x3e4290u: goto label_3e4290;
        case 0x3e4294u: goto label_3e4294;
        case 0x3e4298u: goto label_3e4298;
        case 0x3e429cu: goto label_3e429c;
        case 0x3e42a0u: goto label_3e42a0;
        case 0x3e42a4u: goto label_3e42a4;
        case 0x3e42a8u: goto label_3e42a8;
        case 0x3e42acu: goto label_3e42ac;
        default: break;
    }

    ctx->pc = 0x3e4228u;

label_3e4228:
    // 0x3e4228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e4228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3e422c:
    // 0x3e422c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e422cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_3e4230:
    // 0x3e4230: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e4230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3e4234:
    // 0x3e4234: 0x24423910  addiu       $v0, $v0, 0x3910
    ctx->pc = 0x3e4234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14608));
label_3e4238:
    // 0x3e4238: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e4238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3e423c:
    // 0x3e423c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e423cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e4240:
    // 0x3e4240: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e4240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3e4244:
    // 0x3e4244: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e4244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e4248:
    // 0x3e4248: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3e4248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3e424c:
    // 0x3e424c: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_3e4250:
    if (ctx->pc == 0x3E4250u) {
        ctx->pc = 0x3E4250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E424Cu;
        // 0x3e4250: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4254u;
        goto label_3e4254;
    }
    ctx->pc = 0x3E424Cu;
    {
        const bool branch_taken_0x3e424c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E424Cu;
        // 0x3e4250: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e424c) {
            ctx->pc = 0x3E4284u;
            goto label_3e4284;
        }
    }
    ctx->pc = 0x3E4254u;
label_3e4254:
    // 0x3e4254: 0x26300018  addiu       $s0, $s1, 0x18
    ctx->pc = 0x3e4254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_3e4258:
    // 0x3e4258: 0x1230000b  beq         $s1, $s0, . + 4 + (0xB << 2)
label_3e425c:
    if (ctx->pc == 0x3E425Cu) {
        ctx->pc = 0x3E425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4258u;
        // 0x3e425c: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4260u;
        goto label_3e4260;
    }
    ctx->pc = 0x3E4258u;
    {
        const bool branch_taken_0x3e4258 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x3E425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4258u;
        // 0x3e425c: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4258) {
            ctx->pc = 0x3E4288u;
            goto label_3e4288;
        }
    }
    ctx->pc = 0x3E4260u;
label_3e4260:
    // 0x3e4260: 0x2610ffe8  addiu       $s0, $s0, -0x18
    ctx->pc = 0x3e4260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
label_3e4264:
    // 0x3e4264: 0x0  nop
    ctx->pc = 0x3e4264u;
    // NOP
label_3e4268:
    // 0x3e4268: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e4268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e426c:
    // 0x3e426c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x3e426cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3e4270:
    // 0x3e4270: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3e4270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3e4274:
    // 0x3e4274: 0x40f809  jalr        $v0
label_3e4278:
    if (ctx->pc == 0x3E4278u) {
        ctx->pc = 0x3E4278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4274u;
        // 0x3e4278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E427Cu;
        goto label_3e427c;
    }
    ctx->pc = 0x3E4274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E427Cu);
        ctx->pc = 0x3E4278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4274u;
        // 0x3e4278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4274u, 0x3E427Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E427Cu;
label_3e427c:
    // 0x3e427c: 0x1630fffa  bne         $s1, $s0, . + 4 + (-0x6 << 2)
label_3e4280:
    if (ctx->pc == 0x3E4280u) {
        ctx->pc = 0x3E4280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E427Cu;
        // 0x3e4280: 0x2610ffe8  addiu       $s0, $s0, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4284u;
        goto label_3e4284;
    }
    ctx->pc = 0x3E427Cu;
    {
        const bool branch_taken_0x3e427c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x3E4280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E427Cu;
        // 0x3e4280: 0x2610ffe8  addiu       $s0, $s0, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e427c) {
            ctx->pc = 0x3E4268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e4268;
        }
    }
    ctx->pc = 0x3E4284u;
label_3e4284:
    // 0x3e4284: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x3e4284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_3e4288:
    // 0x3e4288: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3e428c:
    if (ctx->pc == 0x3E428Cu) {
        ctx->pc = 0x3E428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4288u;
        // 0x3e428c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4290u;
        goto label_3e4290;
    }
    ctx->pc = 0x3E4288u;
    {
        const bool branch_taken_0x3e4288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4288u;
        // 0x3e428c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4288) {
            ctx->pc = 0x3E429Cu;
            goto label_3e429c;
        }
    }
    ctx->pc = 0x3E4290u;
label_3e4290:
    // 0x3e4290: 0xc0f5222  jal         func_3D4888
label_3e4294:
    if (ctx->pc == 0x3E4294u) {
        ctx->pc = 0x3E4294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4290u;
        // 0x3e4294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4298u;
        goto label_3e4298;
    }
    ctx->pc = 0x3E4290u;
    SET_GPR_U32(ctx, 31, 0x3E4298u);
    ctx->pc = 0x3E4294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4290u;
    // 0x3e4294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E4290u, 0x3E4298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4298u;
label_3e4298:
    // 0x3e4298: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e4298u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e429c:
    // 0x3e429c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e429cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3e42a0:
    // 0x3e42a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e42a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3e42a4:
    // 0x3e42a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3e42a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3e42a8:
    // 0x3e42a8: 0x3e00008  jr          $ra
label_3e42ac:
    if (ctx->pc == 0x3E42ACu) {
        ctx->pc = 0x3E42ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E42A8u;
        // 0x3e42ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E42B0u;
        goto label_fallthrough_0x3e42a8;
    }
    ctx->pc = 0x3E42A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E42ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E42A8u;
        // 0x3e42ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E42A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e42a8:
    ctx->pc = 0x3E42B0u;
}
