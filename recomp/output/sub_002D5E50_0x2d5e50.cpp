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

// Function: sub_002D5E50
// Address: 0x2d5e50 - 0x2d5fa8
void sub_002D5E50_0x2d5e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5E50_0x2d5e50");
#endif

    switch (ctx->pc) {
        case 0x2d5e9cu: goto label_2d5e9c;
        case 0x2d5ec8u: goto label_2d5ec8;
        case 0x2d5ef4u: goto label_2d5ef4;
        case 0x2d5f40u: goto label_2d5f40;
        case 0x2d5f68u: goto label_2d5f68;
        default: break;
    }

    ctx->pc = 0x2d5e50u;

    // 0x2d5e50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d5e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d5e54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d5e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d5e58: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d5e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d5e5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d5e5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5e60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d5e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d5e64: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2d5e64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5e68: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d5e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d5e6c: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x2d5e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2d5e70: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d5e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d5e74: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2d5e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d5e78: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2d5e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2d5e7c: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x2d5e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2d5e80: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2d5e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d5e84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d5e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d5e88: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5E88u;
    {
        const bool branch_taken_0x2d5e88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2D5E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5E88u;
        // 0x2d5e8c: 0x24020118  addiu       $v0, $zero, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5e88) {
            ctx->pc = 0x2D5EA0u;
            goto label_2d5ea0;
        }
    }
    ctx->pc = 0x2D5E90u;
    // 0x2d5e90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d5e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5e94: 0xc0b5766  jal         func_2D5D98
    ctx->pc = 0x2D5E94u;
    SET_GPR_U32(ctx, 31, 0x2D5E9Cu);
    ctx->pc = 0x2D5E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5E94u;
    // 0x2d5e98: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5D98u, 0x2D5E94u, 0x2D5E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5E9Cu;
label_2d5e9c:
    // 0x2d5e9c: 0x24020118  addiu       $v0, $zero, 0x118
    ctx->pc = 0x2d5e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
label_2d5ea0:
    // 0x2d5ea0: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2d5ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2d5ea4: 0x2622818  mult        $a1, $s3, $v0
    ctx->pc = 0x2d5ea4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2d5ea8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d5ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5eac: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2d5eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2d5eb0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2d5eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d5eb4: 0x18600016  blez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D5EB4u;
    {
        const bool branch_taken_0x2d5eb4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2D5EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5EB4u;
        // 0x2d5eb8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5eb4) {
            ctx->pc = 0x2D5F10u;
            goto label_2d5f10;
        }
    }
    ctx->pc = 0x2D5EBCu;
    // 0x2d5ebc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d5ebcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5ec0: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x2d5ec0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d5ec4: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x2d5ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_2d5ec8:
    // 0x2d5ec8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2d5ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2d5ecc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d5eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d5ed0: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x2d5ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2d5ed4: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x2d5ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2d5ed8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2d5ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d5edc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2d5edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d5ee0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d5ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d5ee4: 0x54740004  bnel        $v1, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D5EE4u;
    {
        const bool branch_taken_0x2d5ee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x2d5ee4) {
            ctx->pc = 0x2D5EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5EE4u;
            // 0x2d5ee8: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5EF8u;
            goto label_2d5ef8;
        }
    }
    ctx->pc = 0x2D5EECu;
    // 0x2d5eec: 0xc0b5766  jal         func_2D5D98
    ctx->pc = 0x2D5EECu;
    SET_GPR_U32(ctx, 31, 0x2D5EF4u);
    ctx->pc = 0x2D5EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5EECu;
    // 0x2d5ef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5D98u, 0x2D5EECu, 0x2D5EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5EF4u;
label_2d5ef4:
    // 0x2d5ef4: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2d5ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2d5ef8:
    // 0x2d5ef8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d5ef8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d5efc: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x2d5efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2d5f00: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2d5f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2d5f04: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2d5f04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d5f08: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2D5F08u;
    {
        const bool branch_taken_0x2d5f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F08u;
        // 0x2d5f0c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5f08) {
            ctx->pc = 0x2D5EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5ec8;
        }
    }
    ctx->pc = 0x2D5F10u;
label_2d5f10:
    // 0x2d5f10: 0x24020118  addiu       $v0, $zero, 0x118
    ctx->pc = 0x2d5f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x2d5f14: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2d5f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5f18: 0x2622818  mult        $a1, $s3, $v0
    ctx->pc = 0x2d5f18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2d5f1c: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2d5f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2d5f20: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2d5f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2d5f24: 0x18600017  blez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D5F24u;
    {
        const bool branch_taken_0x2d5f24 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2D5F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F24u;
        // 0x2d5f28: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5f24) {
            ctx->pc = 0x2D5F84u;
            goto label_2d5f84;
        }
    }
    ctx->pc = 0x2D5F2Cu;
    // 0x2d5f2c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d5f2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5f30: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2d5f30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d5f34: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x2d5f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2d5f38: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2d5f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2d5f3c: 0x0  nop
    ctx->pc = 0x2d5f3cu;
    // NOP
label_2d5f40:
    // 0x2d5f40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d5f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d5f44: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x2d5f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2d5f48: 0x8c650098  lw          $a1, 0x98($v1)
    ctx->pc = 0x2d5f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
    // 0x2d5f4c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2d5f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d5f50: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2d5f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d5f54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d5f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d5f58: 0x54730004  bnel        $v1, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D5F58u;
    {
        const bool branch_taken_0x2d5f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x2d5f58) {
            ctx->pc = 0x2D5F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5F58u;
            // 0x2d5f5c: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5F6Cu;
            goto label_2d5f6c;
        }
    }
    ctx->pc = 0x2D5F60u;
    // 0x2d5f60: 0xc0b5766  jal         func_2D5D98
    ctx->pc = 0x2D5F60u;
    SET_GPR_U32(ctx, 31, 0x2D5F68u);
    ctx->pc = 0x2D5F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5F60u;
    // 0x2d5f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5D98u, 0x2D5F60u, 0x2D5F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5F68u;
label_2d5f68:
    // 0x2d5f68: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2d5f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2d5f6c:
    // 0x2d5f6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d5f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d5f70: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x2d5f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2d5f74: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2d5f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2d5f78: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2d5f78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d5f7c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2D5F7Cu;
    {
        const bool branch_taken_0x2d5f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F7Cu;
        // 0x2d5f80: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5f7c) {
            ctx->pc = 0x2D5F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5f40;
        }
    }
    ctx->pc = 0x2D5F84u;
label_2d5f84:
    // 0x2d5f84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d5f84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5f88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d5f88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d5f8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d5f8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5f90: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d5f90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5f94: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d5f94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5f98: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2d5f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F9Cu;
        // 0x2d5fa0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5FA4u;
    // 0x2d5fa4: 0x0  nop
    ctx->pc = 0x2d5fa4u;
    // NOP
    ctx->pc = 0x2d5fa8u;
}
