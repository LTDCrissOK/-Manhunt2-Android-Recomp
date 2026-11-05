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

// Function: sub_003E4130
// Address: 0x3e4130 - 0x3e41c8
void sub_003E4130_0x3e4130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E4130_0x3e4130");
#endif

    switch (ctx->pc) {
        case 0x3e4130u: goto label_3e4130;
        case 0x3e4134u: goto label_3e4134;
        case 0x3e4138u: goto label_3e4138;
        case 0x3e413cu: goto label_3e413c;
        case 0x3e4140u: goto label_3e4140;
        case 0x3e4144u: goto label_3e4144;
        case 0x3e4148u: goto label_3e4148;
        case 0x3e414cu: goto label_3e414c;
        case 0x3e4150u: goto label_3e4150;
        case 0x3e4154u: goto label_3e4154;
        case 0x3e4158u: goto label_3e4158;
        case 0x3e415cu: goto label_3e415c;
        case 0x3e4160u: goto label_3e4160;
        case 0x3e4164u: goto label_3e4164;
        case 0x3e4168u: goto label_3e4168;
        case 0x3e416cu: goto label_3e416c;
        case 0x3e4170u: goto label_3e4170;
        case 0x3e4174u: goto label_3e4174;
        case 0x3e4178u: goto label_3e4178;
        case 0x3e417cu: goto label_3e417c;
        case 0x3e4180u: goto label_3e4180;
        case 0x3e4184u: goto label_3e4184;
        case 0x3e4188u: goto label_3e4188;
        case 0x3e418cu: goto label_3e418c;
        case 0x3e4190u: goto label_3e4190;
        case 0x3e4194u: goto label_3e4194;
        case 0x3e4198u: goto label_3e4198;
        case 0x3e419cu: goto label_3e419c;
        case 0x3e41a0u: goto label_3e41a0;
        case 0x3e41a4u: goto label_3e41a4;
        case 0x3e41a8u: goto label_3e41a8;
        case 0x3e41acu: goto label_3e41ac;
        case 0x3e41b0u: goto label_3e41b0;
        case 0x3e41b4u: goto label_3e41b4;
        case 0x3e41b8u: goto label_3e41b8;
        case 0x3e41bcu: goto label_3e41bc;
        case 0x3e41c0u: goto label_3e41c0;
        case 0x3e41c4u: goto label_3e41c4;
        default: break;
    }

    ctx->pc = 0x3e4130u;

label_3e4130:
    // 0x3e4130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e4130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3e4134:
    // 0x3e4134: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e4134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_3e4138:
    // 0x3e4138: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e4138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3e413c:
    // 0x3e413c: 0x244238f0  addiu       $v0, $v0, 0x38F0
    ctx->pc = 0x3e413cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14576));
label_3e4140:
    // 0x3e4140: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3e4140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_3e4144:
    // 0x3e4144: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e4144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e4148:
    // 0x3e4148: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e4148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3e414c:
    // 0x3e414c: 0x26235940  addiu       $v1, $s1, 0x5940
    ctx->pc = 0x3e414cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 22848));
label_3e4150:
    // 0x3e4150: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e4150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3e4154:
    // 0x3e4154: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3e4154u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e4158:
    // 0x3e4158: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e4158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3e415c:
    // 0x3e415c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_3e4160:
    if (ctx->pc == 0x3E4160u) {
        ctx->pc = 0x3E4160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E415Cu;
        // 0x3e4160: 0xae2271c8  sw          $v0, 0x71C8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 29128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4164u;
        goto label_3e4164;
    }
    ctx->pc = 0x3E415Cu;
    {
        const bool branch_taken_0x3e415c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E415Cu;
        // 0x3e4160: 0xae2271c8  sw          $v0, 0x71C8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 29128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e415c) {
            ctx->pc = 0x3E4194u;
            goto label_3e4194;
        }
    }
    ctx->pc = 0x3E4164u;
label_3e4164:
    // 0x3e4164: 0x263071c0  addiu       $s0, $s1, 0x71C0
    ctx->pc = 0x3e4164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 29120));
label_3e4168:
    // 0x3e4168: 0x1070000a  beq         $v1, $s0, . + 4 + (0xA << 2)
label_3e416c:
    if (ctx->pc == 0x3E416Cu) {
        ctx->pc = 0x3E416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4168u;
        // 0x3e416c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4170u;
        goto label_3e4170;
    }
    ctx->pc = 0x3E4168u;
    {
        const bool branch_taken_0x3e4168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x3E416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4168u;
        // 0x3e416c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4168) {
            ctx->pc = 0x3E4194u;
            goto label_3e4194;
        }
    }
    ctx->pc = 0x3E4170u;
label_3e4170:
    // 0x3e4170: 0x2610f3c0  addiu       $s0, $s0, -0xC40
    ctx->pc = 0x3e4170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964160));
label_3e4174:
    // 0x3e4174: 0x0  nop
    ctx->pc = 0x3e4174u;
    // NOP
label_3e4178:
    // 0x3e4178: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e4178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e417c:
    // 0x3e417c: 0x8e030c04  lw          $v1, 0xC04($s0)
    ctx->pc = 0x3e417cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
label_3e4180:
    // 0x3e4180: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3e4180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3e4184:
    // 0x3e4184: 0x40f809  jalr        $v0
label_3e4188:
    if (ctx->pc == 0x3E4188u) {
        ctx->pc = 0x3E4188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4184u;
        // 0x3e4188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E418Cu;
        goto label_3e418c;
    }
    ctx->pc = 0x3E4184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E418Cu);
        ctx->pc = 0x3E4188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4184u;
        // 0x3e4188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4184u, 0x3E418Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E418Cu;
label_3e418c:
    // 0x3e418c: 0x1650fffa  bne         $s2, $s0, . + 4 + (-0x6 << 2)
label_3e4190:
    if (ctx->pc == 0x3E4190u) {
        ctx->pc = 0x3E4190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E418Cu;
        // 0x3e4190: 0x2610f3c0  addiu       $s0, $s0, -0xC40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4194u;
        goto label_3e4194;
    }
    ctx->pc = 0x3E418Cu;
    {
        const bool branch_taken_0x3e418c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x3E4190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E418Cu;
        // 0x3e4190: 0x2610f3c0  addiu       $s0, $s0, -0xC40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e418c) {
            ctx->pc = 0x3E4178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e4178;
        }
    }
    ctx->pc = 0x3E4194u;
label_3e4194:
    // 0x3e4194: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x3e4194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_3e4198:
    // 0x3e4198: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3e419c:
    if (ctx->pc == 0x3E419Cu) {
        ctx->pc = 0x3E419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4198u;
        // 0x3e419c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E41A0u;
        goto label_3e41a0;
    }
    ctx->pc = 0x3E4198u;
    {
        const bool branch_taken_0x3e4198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4198u;
        // 0x3e419c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4198) {
            ctx->pc = 0x3E41ACu;
            goto label_3e41ac;
        }
    }
    ctx->pc = 0x3E41A0u;
label_3e41a0:
    // 0x3e41a0: 0xc0f5222  jal         func_3D4888
label_3e41a4:
    if (ctx->pc == 0x3E41A4u) {
        ctx->pc = 0x3E41A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E41A0u;
        // 0x3e41a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E41A8u;
        goto label_3e41a8;
    }
    ctx->pc = 0x3E41A0u;
    SET_GPR_U32(ctx, 31, 0x3E41A8u);
    ctx->pc = 0x3E41A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E41A0u;
    // 0x3e41a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E41A0u, 0x3E41A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E41A8u;
label_3e41a8:
    // 0x3e41a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e41a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e41ac:
    // 0x3e41ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e41acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3e41b0:
    // 0x3e41b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e41b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3e41b4:
    // 0x3e41b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3e41b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3e41b8:
    // 0x3e41b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e41b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3e41bc:
    // 0x3e41bc: 0x3e00008  jr          $ra
label_3e41c0:
    if (ctx->pc == 0x3E41C0u) {
        ctx->pc = 0x3E41C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E41BCu;
        // 0x3e41c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E41C4u;
        goto label_3e41c4;
    }
    ctx->pc = 0x3E41BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E41C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E41BCu;
        // 0x3e41c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E41BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E41C4u;
label_3e41c4:
    // 0x3e41c4: 0x0  nop
    ctx->pc = 0x3e41c4u;
    // NOP
    ctx->pc = 0x3e41c8u;
}
