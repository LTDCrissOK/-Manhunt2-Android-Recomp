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

// Function: sub_001A4148
// Address: 0x1a4148 - 0x1a4320
void sub_001A4148_0x1a4148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4148_0x1a4148");
#endif

    switch (ctx->pc) {
        case 0x1a4148u: goto label_1a4148;
        case 0x1a414cu: goto label_1a414c;
        case 0x1a4150u: goto label_1a4150;
        case 0x1a4154u: goto label_1a4154;
        case 0x1a4158u: goto label_1a4158;
        case 0x1a415cu: goto label_1a415c;
        case 0x1a4160u: goto label_1a4160;
        case 0x1a4164u: goto label_1a4164;
        case 0x1a4168u: goto label_1a4168;
        case 0x1a416cu: goto label_1a416c;
        case 0x1a4170u: goto label_1a4170;
        case 0x1a4174u: goto label_1a4174;
        case 0x1a4178u: goto label_1a4178;
        case 0x1a417cu: goto label_1a417c;
        case 0x1a4180u: goto label_1a4180;
        case 0x1a4184u: goto label_1a4184;
        case 0x1a4188u: goto label_1a4188;
        case 0x1a418cu: goto label_1a418c;
        case 0x1a4190u: goto label_1a4190;
        case 0x1a4194u: goto label_1a4194;
        case 0x1a4198u: goto label_1a4198;
        case 0x1a419cu: goto label_1a419c;
        case 0x1a41a0u: goto label_1a41a0;
        case 0x1a41a4u: goto label_1a41a4;
        case 0x1a41a8u: goto label_1a41a8;
        case 0x1a41acu: goto label_1a41ac;
        case 0x1a41b0u: goto label_1a41b0;
        case 0x1a41b4u: goto label_1a41b4;
        case 0x1a41b8u: goto label_1a41b8;
        case 0x1a41bcu: goto label_1a41bc;
        case 0x1a41c0u: goto label_1a41c0;
        case 0x1a41c4u: goto label_1a41c4;
        case 0x1a41c8u: goto label_1a41c8;
        case 0x1a41ccu: goto label_1a41cc;
        case 0x1a41d0u: goto label_1a41d0;
        case 0x1a41d4u: goto label_1a41d4;
        case 0x1a41d8u: goto label_1a41d8;
        case 0x1a41dcu: goto label_1a41dc;
        case 0x1a41e0u: goto label_1a41e0;
        case 0x1a41e4u: goto label_1a41e4;
        case 0x1a41e8u: goto label_1a41e8;
        case 0x1a41ecu: goto label_1a41ec;
        case 0x1a41f0u: goto label_1a41f0;
        case 0x1a41f4u: goto label_1a41f4;
        case 0x1a41f8u: goto label_1a41f8;
        case 0x1a41fcu: goto label_1a41fc;
        case 0x1a4200u: goto label_1a4200;
        case 0x1a4204u: goto label_1a4204;
        case 0x1a4208u: goto label_1a4208;
        case 0x1a420cu: goto label_1a420c;
        case 0x1a4210u: goto label_1a4210;
        case 0x1a4214u: goto label_1a4214;
        case 0x1a4218u: goto label_1a4218;
        case 0x1a421cu: goto label_1a421c;
        case 0x1a4220u: goto label_1a4220;
        case 0x1a4224u: goto label_1a4224;
        case 0x1a4228u: goto label_1a4228;
        case 0x1a422cu: goto label_1a422c;
        case 0x1a4230u: goto label_1a4230;
        case 0x1a4234u: goto label_1a4234;
        case 0x1a4238u: goto label_1a4238;
        case 0x1a423cu: goto label_1a423c;
        case 0x1a4240u: goto label_1a4240;
        case 0x1a4244u: goto label_1a4244;
        case 0x1a4248u: goto label_1a4248;
        case 0x1a424cu: goto label_1a424c;
        case 0x1a4250u: goto label_1a4250;
        case 0x1a4254u: goto label_1a4254;
        case 0x1a4258u: goto label_1a4258;
        case 0x1a425cu: goto label_1a425c;
        case 0x1a4260u: goto label_1a4260;
        case 0x1a4264u: goto label_1a4264;
        case 0x1a4268u: goto label_1a4268;
        case 0x1a426cu: goto label_1a426c;
        case 0x1a4270u: goto label_1a4270;
        case 0x1a4274u: goto label_1a4274;
        case 0x1a4278u: goto label_1a4278;
        case 0x1a427cu: goto label_1a427c;
        case 0x1a4280u: goto label_1a4280;
        case 0x1a4284u: goto label_1a4284;
        case 0x1a4288u: goto label_1a4288;
        case 0x1a428cu: goto label_1a428c;
        case 0x1a4290u: goto label_1a4290;
        case 0x1a4294u: goto label_1a4294;
        case 0x1a4298u: goto label_1a4298;
        case 0x1a429cu: goto label_1a429c;
        case 0x1a42a0u: goto label_1a42a0;
        case 0x1a42a4u: goto label_1a42a4;
        case 0x1a42a8u: goto label_1a42a8;
        case 0x1a42acu: goto label_1a42ac;
        case 0x1a42b0u: goto label_1a42b0;
        case 0x1a42b4u: goto label_1a42b4;
        case 0x1a42b8u: goto label_1a42b8;
        case 0x1a42bcu: goto label_1a42bc;
        case 0x1a42c0u: goto label_1a42c0;
        case 0x1a42c4u: goto label_1a42c4;
        case 0x1a42c8u: goto label_1a42c8;
        case 0x1a42ccu: goto label_1a42cc;
        case 0x1a42d0u: goto label_1a42d0;
        case 0x1a42d4u: goto label_1a42d4;
        case 0x1a42d8u: goto label_1a42d8;
        case 0x1a42dcu: goto label_1a42dc;
        case 0x1a42e0u: goto label_1a42e0;
        case 0x1a42e4u: goto label_1a42e4;
        case 0x1a42e8u: goto label_1a42e8;
        case 0x1a42ecu: goto label_1a42ec;
        case 0x1a42f0u: goto label_1a42f0;
        case 0x1a42f4u: goto label_1a42f4;
        case 0x1a42f8u: goto label_1a42f8;
        case 0x1a42fcu: goto label_1a42fc;
        case 0x1a4300u: goto label_1a4300;
        case 0x1a4304u: goto label_1a4304;
        case 0x1a4308u: goto label_1a4308;
        case 0x1a430cu: goto label_1a430c;
        case 0x1a4310u: goto label_1a4310;
        case 0x1a4314u: goto label_1a4314;
        case 0x1a4318u: goto label_1a4318;
        case 0x1a431cu: goto label_1a431c;
        default: break;
    }

    ctx->pc = 0x1a4148u;

label_1a4148:
    // 0x1a4148: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a4148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a414c:
    // 0x1a414c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a414cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1a4150:
    // 0x1a4150: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1a4150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1a4154:
    // 0x1a4154: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a4154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4158:
    // 0x1a4158: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a4158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a415c:
    // 0x1a415c: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x1a415cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1a4160:
    // 0x1a4160: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a4160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a4164:
    // 0x1a4164: 0x5051006a  beql        $v0, $s1, . + 4 + (0x6A << 2)
label_1a4168:
    if (ctx->pc == 0x1A4168u) {
        ctx->pc = 0x1A4168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4164u;
        // 0x1a4168: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A416Cu;
        goto label_1a416c;
    }
    ctx->pc = 0x1A4164u;
    {
        const bool branch_taken_0x1a4164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1a4164) {
            ctx->pc = 0x1A4168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4164u;
            // 0x1a4168: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4310u;
            goto label_1a4310;
        }
    }
    ctx->pc = 0x1A416Cu;
label_1a416c:
    // 0x1a416c: 0xc0691d6  jal         func_1A4758
label_1a4170:
    if (ctx->pc == 0x1A4170u) {
        ctx->pc = 0x1A4174u;
        goto label_1a4174;
    }
    ctx->pc = 0x1A416Cu;
    SET_GPR_U32(ctx, 31, 0x1A4174u);
    ctx->pc = 0x1A4758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4758u, 0x1A416Cu, 0x1A4174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4174u;
label_1a4174:
    // 0x1a4174: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a4174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a4178:
    // 0x1a4178: 0x8c830334  lw          $v1, 0x334($a0)
    ctx->pc = 0x1a4178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
label_1a417c:
    // 0x1a417c: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x1a417cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_1a4180:
    // 0x1a4180: 0x2442ffe3  addiu       $v0, $v0, -0x1D
    ctx->pc = 0x1a4180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967267));
label_1a4184:
    // 0x1a4184: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1a4184u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1a4188:
    // 0x1a4188: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_1a418c:
    if (ctx->pc == 0x1A418Cu) {
        ctx->pc = 0x1A418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4188u;
        // 0x1a418c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4190u;
        goto label_1a4190;
    }
    ctx->pc = 0x1A4188u;
    {
        const bool branch_taken_0x1a4188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4188u;
        // 0x1a418c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4188) {
            ctx->pc = 0x1A41E8u;
            goto label_1a41e8;
        }
    }
    ctx->pc = 0x1A4190u;
label_1a4190:
    // 0x1a4190: 0x8c830338  lw          $v1, 0x338($a0)
    ctx->pc = 0x1a4190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 824)));
label_1a4194:
    // 0x1a4194: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1a4194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1a4198:
    // 0x1a4198: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x1a4198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_1a419c:
    // 0x1a419c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_1a41a0:
    if (ctx->pc == 0x1A41A0u) {
        ctx->pc = 0x1A41A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A419Cu;
        // 0x1a41a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A41A4u;
        goto label_1a41a4;
    }
    ctx->pc = 0x1A419Cu;
    {
        const bool branch_taken_0x1a419c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A41A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A419Cu;
        // 0x1a41a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a419c) {
            ctx->pc = 0x1A41C0u;
            goto label_1a41c0;
        }
    }
    ctx->pc = 0x1A41A4u;
label_1a41a4:
    // 0x1a41a4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a41a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a41a8:
    // 0x1a41a8: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
label_1a41ac:
    if (ctx->pc == 0x1A41ACu) {
        ctx->pc = 0x1A41ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A41A8u;
        // 0x1a41ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A41B0u;
        goto label_1a41b0;
    }
    ctx->pc = 0x1A41A8u;
    {
        const bool branch_taken_0x1a41a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a41a8) {
            ctx->pc = 0x1A41ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A41A8u;
            // 0x1a41ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A41C4u;
            goto label_1a41c4;
        }
    }
    ctx->pc = 0x1A41B0u;
label_1a41b0:
    // 0x1a41b0: 0x10710003  beq         $v1, $s1, . + 4 + (0x3 << 2)
label_1a41b4:
    if (ctx->pc == 0x1A41B4u) {
        ctx->pc = 0x1A41B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A41B0u;
        // 0x1a41b4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A41B8u;
        goto label_1a41b8;
    }
    ctx->pc = 0x1A41B0u;
    {
        const bool branch_taken_0x1a41b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x1A41B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A41B0u;
        // 0x1a41b4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a41b0) {
            ctx->pc = 0x1A41C0u;
            goto label_1a41c0;
        }
    }
    ctx->pc = 0x1A41B8u;
label_1a41b8:
    // 0x1a41b8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1a41bc:
    if (ctx->pc == 0x1A41BCu) {
        ctx->pc = 0x1A41C0u;
        goto label_1a41c0;
    }
    ctx->pc = 0x1A41B8u;
    {
        const bool branch_taken_0x1a41b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a41b8) {
            ctx->pc = 0x1A41C4u;
            goto label_1a41c4;
        }
    }
    ctx->pc = 0x1A41C0u;
label_1a41c0:
    // 0x1a41c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a41c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a41c4:
    // 0x1a41c4: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_1a41c8:
    if (ctx->pc == 0x1A41C8u) {
        ctx->pc = 0x1A41C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A41C4u;
        // 0x1a41c8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A41CCu;
        goto label_1a41cc;
    }
    ctx->pc = 0x1A41C4u;
    {
        const bool branch_taken_0x1a41c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A41C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A41C4u;
        // 0x1a41c8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a41c4) {
            ctx->pc = 0x1A41E8u;
            goto label_1a41e8;
        }
    }
    ctx->pc = 0x1A41CCu;
label_1a41cc:
    // 0x1a41cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a41ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a41d0:
    // 0x1a41d0: 0x8c440338  lw          $a0, 0x338($v0)
    ctx->pc = 0x1a41d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 824)));
label_1a41d4:
    // 0x1a41d4: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x1a41d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_1a41d8:
    // 0x1a41d8: 0x2463fffa  addiu       $v1, $v1, -0x6
    ctx->pc = 0x1a41d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_1a41dc:
    // 0x1a41dc: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x1a41dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1a41e0:
    // 0x1a41e0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_1a41e4:
    if (ctx->pc == 0x1A41E4u) {
        ctx->pc = 0x1A41E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A41E0u;
        // 0x1a41e4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A41E8u;
        goto label_1a41e8;
    }
    ctx->pc = 0x1A41E0u;
    {
        const bool branch_taken_0x1a41e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A41E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A41E0u;
        // 0x1a41e4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a41e0) {
            ctx->pc = 0x1A4220u;
            goto label_1a4220;
        }
    }
    ctx->pc = 0x1A41E8u;
label_1a41e8:
    // 0x1a41e8: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x1a41e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1a41ec:
    // 0x1a41ec: 0x2443fe98  addiu       $v1, $v0, -0x168
    ctx->pc = 0x1a41ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966936));
label_1a41f0:
    // 0x1a41f0: 0x9c46fe98  lwu         $a2, -0x168($v0)
    ctx->pc = 0x1a41f0u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294966936)));
label_1a41f4:
    // 0x1a41f4: 0x9c650004  lwu         $a1, 0x4($v1)
    ctx->pc = 0x1a41f4u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1a41f8:
    // 0x1a41f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a41f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a41fc:
    // 0x1a41fc: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1a41fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_1a4200:
    // 0x1a4200: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1a4200u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1a4204:
    // 0x1a4204: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a4204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a4208:
    // 0x1a4208: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1a4208u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_1a420c:
    // 0x1a420c: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x1a420cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
label_1a4210:
    // 0x1a4210: 0xc06924e  jal         func_1A4938
label_1a4214:
    if (ctx->pc == 0x1A4214u) {
        ctx->pc = 0x1A4214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4210u;
        // 0x1a4214: 0xa62825  or          $a1, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4218u;
        goto label_1a4218;
    }
    ctx->pc = 0x1A4210u;
    SET_GPR_U32(ctx, 31, 0x1A4218u);
    ctx->pc = 0x1A4214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4210u;
    // 0x1a4214: 0xa62825  or          $a1, $a1, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4938u, 0x1A4210u, 0x1A4218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4218u;
label_1a4218:
    // 0x1a4218: 0x1000003d  b           . + 4 + (0x3D << 2)
label_1a421c:
    if (ctx->pc == 0x1A421Cu) {
        ctx->pc = 0x1A421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4218u;
        // 0x1a421c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4220u;
        goto label_1a4220;
    }
    ctx->pc = 0x1A4218u;
    {
        const bool branch_taken_0x1a4218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4218u;
        // 0x1a421c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4218) {
            ctx->pc = 0x1A4310u;
            goto label_1a4310;
        }
    }
    ctx->pc = 0x1A4220u;
label_1a4220:
    // 0x1a4220: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1a4220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1a4224:
    // 0x1a4224: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a4224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a4228:
    // 0x1a4228: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1a422c:
    if (ctx->pc == 0x1A422Cu) {
        ctx->pc = 0x1A422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4228u;
        // 0x1a422c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4230u;
        goto label_1a4230;
    }
    ctx->pc = 0x1A4228u;
    {
        const bool branch_taken_0x1a4228 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4228u;
        // 0x1a422c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4228) {
            ctx->pc = 0x1A4240u;
            goto label_1a4240;
        }
    }
    ctx->pc = 0x1A4230u;
label_1a4230:
    // 0x1a4230: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a4230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a4234:
    // 0x1a4234: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a4234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1a4238:
    // 0x1a4238: 0x40f809  jalr        $v0
label_1a423c:
    if (ctx->pc == 0x1A423Cu) {
        ctx->pc = 0x1A4240u;
        goto label_1a4240;
    }
    ctx->pc = 0x1A4238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4240u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4238u, 0x1A4240u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4240u;
label_1a4240:
    // 0x1a4240: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x1a4240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_1a4244:
    // 0x1a4244: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a4244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4248:
    // 0x1a4248: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1a4248u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a424c:
    // 0x1a424c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a424cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a4250:
    // 0x1a4250: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4254:
    // 0x1a4254: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x1a4254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
label_1a4258:
    // 0x1a4258: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a4258u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1a425c:
    // 0x1a425c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a425cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a4260:
    // 0x1a4260: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1a4260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a4264:
    // 0x1a4264: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a4264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1a4268:
    // 0x1a4268: 0x3c01404c  lui         $at, 0x404C
    ctx->pc = 0x1a4268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16460 << 16));
label_1a426c:
    // 0x1a426c: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x1a426cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
label_1a4270:
    // 0x1a4270: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a4270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a4274:
    // 0x1a4274: 0x40f809  jalr        $v0
label_1a4278:
    if (ctx->pc == 0x1A4278u) {
        ctx->pc = 0x1A4278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4274u;
        // 0x1a4278: 0x8ce51004  lw          $a1, 0x1004($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A427Cu;
        goto label_1a427c;
    }
    ctx->pc = 0x1A4274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A427Cu);
        ctx->pc = 0x1A4278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4274u;
        // 0x1a4278: 0x8ce51004  lw          $a1, 0x1004($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4274u, 0x1A427Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A427Cu;
label_1a427c:
    // 0x1a427c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a427cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a4280:
    // 0x1a4280: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a4280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a4284:
    // 0x1a4284: 0xc06faee  jal         func_1BEBB8
label_1a4288:
    if (ctx->pc == 0x1A4288u) {
        ctx->pc = 0x1A4288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4284u;
        // 0x1a4288: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A428Cu;
        goto label_1a428c;
    }
    ctx->pc = 0x1A4284u;
    SET_GPR_U32(ctx, 31, 0x1A428Cu);
    ctx->pc = 0x1A4288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4284u;
    // 0x1a4288: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB8u, 0x1A4284u, 0x1A428Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A428Cu;
label_1a428c:
    // 0x1a428c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a428cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a4290:
    // 0x1a4290: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1a4290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_1a4294:
    // 0x1a4294: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a4294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a4298:
    // 0x1a4298: 0xc0b12b0  jal         func_2C4AC0
label_1a429c:
    if (ctx->pc == 0x1A429Cu) {
        ctx->pc = 0x1A42A0u;
        goto label_1a42a0;
    }
    ctx->pc = 0x1A4298u;
    SET_GPR_U32(ctx, 31, 0x1A42A0u);
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1A4298u, 0x1A42A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A42A0u;
label_1a42a0:
    // 0x1a42a0: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x1a42a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
label_1a42a4:
    // 0x1a42a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a42a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a42a8:
    // 0x1a42a8: 0x0  nop
    ctx->pc = 0x1a42a8u;
    // NOP
label_1a42ac:
    // 0x1a42ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a42acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a42b0:
    // 0x1a42b0: 0x0  nop
    ctx->pc = 0x1a42b0u;
    // NOP
label_1a42b4:
    // 0x1a42b4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1a42b8:
    if (ctx->pc == 0x1A42B8u) {
        ctx->pc = 0x1A42BCu;
        goto label_1a42bc;
    }
    ctx->pc = 0x1A42B4u;
    {
        const bool branch_taken_0x1a42b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a42b4) {
            ctx->pc = 0x1A42D4u;
            goto label_1a42d4;
        }
    }
    ctx->pc = 0x1A42BCu;
label_1a42bc:
    // 0x1a42bc: 0xc061a16  jal         func_186858
label_1a42c0:
    if (ctx->pc == 0x1A42C0u) {
        ctx->pc = 0x1A42C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A42BCu;
        // 0x1a42c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A42C4u;
        goto label_1a42c4;
    }
    ctx->pc = 0x1A42BCu;
    SET_GPR_U32(ctx, 31, 0x1A42C4u);
    ctx->pc = 0x1A42C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A42BCu;
    // 0x1a42c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A42BCu, 0x1A42C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A42C4u;
label_1a42c4:
    // 0x1a42c4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a42c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a42c8:
    // 0x1a42c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a42c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a42cc:
    // 0x1a42cc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a42d0:
    if (ctx->pc == 0x1A42D0u) {
        ctx->pc = 0x1A42D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A42CCu;
        // 0x1a42d0: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A42D4u;
        goto label_1a42d4;
    }
    ctx->pc = 0x1A42CCu;
    {
        const bool branch_taken_0x1a42cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A42D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A42CCu;
        // 0x1a42d0: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a42cc) {
            ctx->pc = 0x1A42ECu;
            goto label_1a42ec;
        }
    }
    ctx->pc = 0x1A42D4u;
label_1a42d4:
    // 0x1a42d4: 0xc061a16  jal         func_186858
label_1a42d8:
    if (ctx->pc == 0x1A42D8u) {
        ctx->pc = 0x1A42D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A42D4u;
        // 0x1a42d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A42DCu;
        goto label_1a42dc;
    }
    ctx->pc = 0x1A42D4u;
    SET_GPR_U32(ctx, 31, 0x1A42DCu);
    ctx->pc = 0x1A42D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A42D4u;
    // 0x1a42d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A42D4u, 0x1A42DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A42DCu;
label_1a42dc:
    // 0x1a42dc: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1a42dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_1a42e0:
    // 0x1a42e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a42e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a42e4:
    // 0x1a42e4: 0x0  nop
    ctx->pc = 0x1a42e4u;
    // NOP
label_1a42e8:
    // 0x1a42e8: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1a42e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_1a42ec:
    // 0x1a42ec: 0xc061a16  jal         func_186858
label_1a42f0:
    if (ctx->pc == 0x1A42F0u) {
        ctx->pc = 0x1A42F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A42ECu;
        // 0x1a42f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A42F4u;
        goto label_1a42f4;
    }
    ctx->pc = 0x1A42ECu;
    SET_GPR_U32(ctx, 31, 0x1A42F4u);
    ctx->pc = 0x1A42F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A42ECu;
    // 0x1a42f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A42ECu, 0x1A42F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A42F4u;
label_1a42f4:
    // 0x1a42f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a42f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a42f8:
    // 0x1a42f8: 0xc06ee66  jal         func_1BB998
label_1a42fc:
    if (ctx->pc == 0x1A42FCu) {
        ctx->pc = 0x1A42FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A42F8u;
        // 0x1a42fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4300u;
        goto label_1a4300;
    }
    ctx->pc = 0x1A42F8u;
    SET_GPR_U32(ctx, 31, 0x1A4300u);
    ctx->pc = 0x1A42FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A42F8u;
    // 0x1a42fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB998u, 0x1A42F8u, 0x1A4300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4300u;
label_1a4300:
    // 0x1a4300: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1a4300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_1a4304:
    // 0x1a4304: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x1a4304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
label_1a4308:
    // 0x1a4308: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1a4308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_1a430c:
    // 0x1a430c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a430cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a4310:
    // 0x1a4310: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1a4310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1a4314:
    // 0x1a4314: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a4314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a4318:
    // 0x1a4318: 0x3e00008  jr          $ra
label_1a431c:
    if (ctx->pc == 0x1A431Cu) {
        ctx->pc = 0x1A431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4318u;
        // 0x1a431c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4320u;
        goto label_fallthrough_0x1a4318;
    }
    ctx->pc = 0x1A4318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4318u;
        // 0x1a431c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a4318:
    ctx->pc = 0x1A4320u;
}
