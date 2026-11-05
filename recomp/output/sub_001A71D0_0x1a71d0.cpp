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

// Function: sub_001A71D0
// Address: 0x1a71d0 - 0x1a72a8
void sub_001A71D0_0x1a71d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A71D0_0x1a71d0");
#endif

    switch (ctx->pc) {
        case 0x1a71f8u: goto label_1a71f8;
        case 0x1a7204u: goto label_1a7204;
        case 0x1a7214u: goto label_1a7214;
        case 0x1a721cu: goto label_1a721c;
        case 0x1a7254u: goto label_1a7254;
        case 0x1a7288u: goto label_1a7288;
        default: break;
    }

    ctx->pc = 0x1a71d0u;

    // 0x1a71d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a71d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a71d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a71d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a71d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a71d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a71dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a71dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a71e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a71e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a71e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a71e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a71e8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a71e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a71ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a71ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a71f0: 0xc06a026  jal         func_1A8098
    ctx->pc = 0x1A71F0u;
    SET_GPR_U32(ctx, 31, 0x1A71F8u);
    ctx->pc = 0x1A71F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A71F0u;
    // 0x1a71f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8098u, 0x1A71F0u, 0x1A71F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A71F8u;
label_1a71f8:
    // 0x1a71f8: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x1a71f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1a71fc: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1A71FCu;
    SET_GPR_U32(ctx, 31, 0x1A7204u);
    ctx->pc = 0x1A7200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A71FCu;
    // 0x1a7200: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1A71FCu, 0x1A7204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7204u;
label_1a7204:
    // 0x1a7204: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A7204u;
    {
        const bool branch_taken_0x1a7204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7204u;
        // 0x1a7208: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7204) {
            ctx->pc = 0x1A7228u;
            goto label_1a7228;
        }
    }
    ctx->pc = 0x1A720Cu;
    // 0x1a720c: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1A720Cu;
    SET_GPR_U32(ctx, 31, 0x1A7214u);
    ctx->pc = 0x1A7210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A720Cu;
    // 0x1a7210: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1A720Cu, 0x1A7214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7214u;
label_1a7214:
    // 0x1a7214: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x1A7214u;
    SET_GPR_U32(ctx, 31, 0x1A721Cu);
    ctx->pc = 0x1A7218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7214u;
    // 0x1a7218: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x1A7214u, 0x1A721Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A721Cu;
label_1a721c:
    // 0x1a721c: 0x3842006e  xori        $v0, $v0, 0x6E
    ctx->pc = 0x1a721cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)110);
    // 0x1a7220: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x1a7220u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1a7224: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a7224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a7228:
    // 0x1a7228: 0x12420008  beq         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A7228u;
    {
        const bool branch_taken_0x1a7228 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a7228) {
            ctx->pc = 0x1A724Cu;
            goto label_1a724c;
        }
    }
    ctx->pc = 0x1A7230u;
    // 0x1a7230: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7230u;
    {
        const bool branch_taken_0x1a7230 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7230u;
        // 0x1a7234: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7230) {
            ctx->pc = 0x1A724Cu;
            goto label_1a724c;
        }
    }
    ctx->pc = 0x1A7238u;
    // 0x1a7238: 0x240607b6  addiu       $a2, $zero, 0x7B6
    ctx->pc = 0x1a7238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1974));
    // 0x1a723c: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x1a723cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1a7240: 0x240307b4  addiu       $v1, $zero, 0x7B4
    ctx->pc = 0x1a7240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1972));
    // 0x1a7244: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A7244u;
    {
        const bool branch_taken_0x1a7244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7244u;
        // 0x1a7248: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7244) {
            ctx->pc = 0x1A727Cu;
            goto label_1a727c;
        }
    }
    ctx->pc = 0x1A724Cu;
label_1a724c:
    // 0x1a724c: 0xc069ffa  jal         func_1A7FE8
    ctx->pc = 0x1A724Cu;
    SET_GPR_U32(ctx, 31, 0x1A7254u);
    ctx->pc = 0x1A7250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A724Cu;
    // 0x1a7250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7FE8u, 0x1A724Cu, 0x1A7254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7254u;
label_1a7254:
    // 0x1a7254: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7254u;
    {
        const bool branch_taken_0x1a7254 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7254u;
        // 0x1a7258: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7254) {
            ctx->pc = 0x1A7270u;
            goto label_1a7270;
        }
    }
    ctx->pc = 0x1A725Cu;
    // 0x1a725c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a725cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7260: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7260u;
    {
        const bool branch_taken_0x1a7260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A7264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7260u;
        // 0x1a7264: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7260) {
            ctx->pc = 0x1A7270u;
            goto label_1a7270;
        }
    }
    ctx->pc = 0x1A7268u;
    // 0x1a7268: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7268u;
    {
        const bool branch_taken_0x1a7268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a7268) {
            ctx->pc = 0x1A726Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7268u;
            // 0x1a726c: 0x240607ba  addiu       $a2, $zero, 0x7BA (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1978));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A727Cu;
            goto label_1a727c;
        }
    }
    ctx->pc = 0x1A7270u;
label_1a7270:
    // 0x1a7270: 0x240607b8  addiu       $a2, $zero, 0x7B8
    ctx->pc = 0x1a7270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1976));
    // 0x1a7274: 0x240207c0  addiu       $v0, $zero, 0x7C0
    ctx->pc = 0x1a7274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x1a7278: 0x53300b  movn        $a2, $v0, $s3
    ctx->pc = 0x1a7278u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_1a727c:
    // 0x1a727c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a727cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7280: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A7280u;
    SET_GPR_U32(ctx, 31, 0x1A7288u);
    ctx->pc = 0x1A7284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7280u;
    // 0x1a7284: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A7280u, 0x1A7288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7288u;
label_1a7288:
    // 0x1a7288: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7288u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a728c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a728cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a7290: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a7290u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7294: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a7294u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a7298: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a7298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a729c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A729Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A72A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A729Cu;
        // 0x1a72a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A729Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A72A4u;
    // 0x1a72a4: 0x0  nop
    ctx->pc = 0x1a72a4u;
    // NOP
    ctx->pc = 0x1a72a8u;
}
