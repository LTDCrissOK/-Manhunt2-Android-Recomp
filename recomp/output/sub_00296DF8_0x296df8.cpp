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

// Function: sub_00296DF8
// Address: 0x296df8 - 0x297110
void sub_00296DF8_0x296df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296DF8_0x296df8");
#endif

    switch (ctx->pc) {
        case 0x296e48u: goto label_296e48;
        case 0x296e78u: goto label_296e78;
        case 0x296e84u: goto label_296e84;
        case 0x296ebcu: goto label_296ebc;
        case 0x296ed8u: goto label_296ed8;
        case 0x296ef4u: goto label_296ef4;
        case 0x296f14u: goto label_296f14;
        case 0x296f34u: goto label_296f34;
        case 0x296f68u: goto label_296f68;
        case 0x296f84u: goto label_296f84;
        case 0x296fc0u: goto label_296fc0;
        case 0x296fd0u: goto label_296fd0;
        case 0x296fe0u: goto label_296fe0;
        case 0x297004u: goto label_297004;
        case 0x297014u: goto label_297014;
        case 0x297034u: goto label_297034;
        case 0x297058u: goto label_297058;
        case 0x297068u: goto label_297068;
        case 0x29707cu: goto label_29707c;
        case 0x29709cu: goto label_29709c;
        case 0x2970acu: goto label_2970ac;
        case 0x2970bcu: goto label_2970bc;
        case 0x2970dcu: goto label_2970dc;
        default: break;
    }

    ctx->pc = 0x296df8u;

    // 0x296df8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x296df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x296dfc: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x296dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x296e00: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x296e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x296e04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x296e04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296e08: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x296e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x296e0c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x296e0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x296e10: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x296e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x296e14: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x296e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x296e18: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x296e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x296e1c: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x296e1cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x296e20: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x296e20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x296e24: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x296e24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x296e28: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x296e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x296e2c: 0x8e320078  lw          $s2, 0x78($s1)
    ctx->pc = 0x296e2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x296e30: 0x125300aa  beq         $s2, $s3, . + 4 + (0xAA << 2)
    ctx->pc = 0x296E30u;
    {
        const bool branch_taken_0x296e30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        ctx->pc = 0x296E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E30u;
        // 0x296e34: 0x3c020052  lui         $v0, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296e30) {
            ctx->pc = 0x2970DCu;
            goto label_2970dc;
        }
    }
    ctx->pc = 0x296E38u;
    // 0x296e38: 0x2450ac80  addiu       $s0, $v0, -0x5380
    ctx->pc = 0x296e38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945920));
    // 0x296e3c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x296e3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296e40: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x296E40u;
    SET_GPR_U32(ctx, 31, 0x296E48u);
    ctx->pc = 0x296E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296E40u;
    // 0x296e44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x296E40u, 0x296E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296E48u;
label_296e48:
    // 0x296e48: 0x24030110  addiu       $v1, $zero, 0x110
    ctx->pc = 0x296e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x296e4c: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x296e4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x296e50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x296e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x296e54: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x296e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x296e58: 0x548000a1  bnel        $a0, $zero, . + 4 + (0xA1 << 2)
    ctx->pc = 0x296E58u;
    {
        const bool branch_taken_0x296e58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x296e58) {
            ctx->pc = 0x296E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296E58u;
            // 0x296e5c: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2970E0u;
            goto label_2970e0;
        }
    }
    ctx->pc = 0x296E60u;
    // 0x296e60: 0x92240014  lbu         $a0, 0x14($s1)
    ctx->pc = 0x296e60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x296e64: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x296e64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296e68: 0x92250015  lbu         $a1, 0x15($s1)
    ctx->pc = 0x296e68u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 21)));
    // 0x296e6c: 0x92260016  lbu         $a2, 0x16($s1)
    ctx->pc = 0x296e6cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x296e70: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x296E70u;
    SET_GPR_U32(ctx, 31, 0x296E78u);
    ctx->pc = 0x296E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296E70u;
    // 0x296e74: 0x92270017  lbu         $a3, 0x17($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x296E70u, 0x296E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296E78u;
label_296e78:
    // 0x296e78: 0x8e250078  lw          $a1, 0x78($s1)
    ctx->pc = 0x296e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x296e7c: 0xc0ad85e  jal         func_2B6178
    ctx->pc = 0x296E7Cu;
    SET_GPR_U32(ctx, 31, 0x296E84u);
    ctx->pc = 0x296E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296E7Cu;
    // 0x296e80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6178u, 0x296E7Cu, 0x296E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296E84u;
label_296e84:
    // 0x296e84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x296e84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296e88: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x296e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x296e8c: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x296E8Cu;
    {
        const bool branch_taken_0x296e8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x296E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E8Cu;
        // 0x296e90: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296e8c) {
            ctx->pc = 0x296EA4u;
            goto label_296ea4;
        }
    }
    ctx->pc = 0x296E94u;
    // 0x296e94: 0x1213000b  beq         $s0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x296E94u;
    {
        const bool branch_taken_0x296e94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x296E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E94u;
        // 0x296e98: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296e94) {
            ctx->pc = 0x296EC4u;
            goto label_296ec4;
        }
    }
    ctx->pc = 0x296E9Cu;
    // 0x296e9c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x296E9Cu;
    {
        const bool branch_taken_0x296e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E9Cu;
        // 0x296ea0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296e9c) {
            ctx->pc = 0x296EE0u;
            goto label_296ee0;
        }
    }
    ctx->pc = 0x296EA4u;
label_296ea4:
    // 0x296ea4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x296ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x296ea8: 0x24a5bb20  addiu       $a1, $a1, -0x44E0
    ctx->pc = 0x296ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949664));
    // 0x296eac: 0x24444ec0  addiu       $a0, $v0, 0x4EC0
    ctx->pc = 0x296eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20160));
    // 0x296eb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x296eb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296eb4: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x296EB4u;
    SET_GPR_U32(ctx, 31, 0x296EBCu);
    ctx->pc = 0x296EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296EB4u;
    // 0x296eb8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x296EB4u, 0x296EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296EBCu;
label_296ebc:
    // 0x296ebc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x296EBCu;
    {
        const bool branch_taken_0x296ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296EBCu;
        // 0x296ec0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296ebc) {
            ctx->pc = 0x296EFCu;
            goto label_296efc;
        }
    }
    ctx->pc = 0x296EC4u;
label_296ec4:
    // 0x296ec4: 0x24a5bb28  addiu       $a1, $a1, -0x44D8
    ctx->pc = 0x296ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949672));
    // 0x296ec8: 0x24444ec0  addiu       $a0, $v0, 0x4EC0
    ctx->pc = 0x296ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20160));
    // 0x296ecc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x296eccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296ed0: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x296ED0u;
    SET_GPR_U32(ctx, 31, 0x296ED8u);
    ctx->pc = 0x296ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296ED0u;
    // 0x296ed4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x296ED0u, 0x296ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296ED8u;
label_296ed8:
    // 0x296ed8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x296ED8u;
    {
        const bool branch_taken_0x296ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296ED8u;
        // 0x296edc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296ed8) {
            ctx->pc = 0x296EFCu;
            goto label_296efc;
        }
    }
    ctx->pc = 0x296EE0u;
label_296ee0:
    // 0x296ee0: 0x24a5bb30  addiu       $a1, $a1, -0x44D0
    ctx->pc = 0x296ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949680));
    // 0x296ee4: 0x24444ec0  addiu       $a0, $v0, 0x4EC0
    ctx->pc = 0x296ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20160));
    // 0x296ee8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x296ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296eec: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x296EECu;
    SET_GPR_U32(ctx, 31, 0x296EF4u);
    ctx->pc = 0x296EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296EECu;
    // 0x296ef0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x296EECu, 0x296EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296EF4u;
label_296ef4:
    // 0x296ef4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x296ef4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296ef8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x296ef8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_296efc:
    // 0x296efc: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x296efcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x296f00: 0xc6350018  lwc1        $f21, 0x18($s1)
    ctx->pc = 0x296f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x296f04: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x296F04u;
    {
        const bool branch_taken_0x296f04 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x296F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296F04u;
        // 0x296f08: 0xc636001c  lwc1        $f22, 0x1C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x296f04) {
            ctx->pc = 0x296F48u;
            goto label_296f48;
        }
    }
    ctx->pc = 0x296F0Cu;
    // 0x296f0c: 0xc0a1a5e  jal         func_286978
    ctx->pc = 0x296F0Cu;
    SET_GPR_U32(ctx, 31, 0x296F14u);
    ctx->pc = 0x296F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296F0Cu;
    // 0x296f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286978u, 0x296F0Cu, 0x296F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296F14u;
label_296f14:
    // 0x296f14: 0xc62e0020  lwc1        $f14, 0x20($s1)
    ctx->pc = 0x296f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x296f18: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x296f18u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x296f1c: 0xc62f0024  lwc1        $f15, 0x24($s1)
    ctx->pc = 0x296f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x296f20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x296f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296f24: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x296f24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x296f28: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x296f28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x296f2c: 0xc09f662  jal         func_27D988
    ctx->pc = 0x296F2Cu;
    SET_GPR_U32(ctx, 31, 0x296F34u);
    ctx->pc = 0x296F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296F2Cu;
    // 0x296f30: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D988u, 0x296F2Cu, 0x296F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296F34u;
label_296f34:
    // 0x296f34: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x296f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x296f38: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x296f38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x296f3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x296f3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296f40: 0x0  nop
    ctx->pc = 0x296f40u;
    // NOP
    // 0x296f44: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x296f44u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_296f48:
    // 0x296f48: 0xc62e0020  lwc1        $f14, 0x20($s1)
    ctx->pc = 0x296f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x296f4c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x296f4cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x296f50: 0xc62f0024  lwc1        $f15, 0x24($s1)
    ctx->pc = 0x296f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x296f54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x296f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296f58: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x296f58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x296f5c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x296f5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x296f60: 0xc09f662  jal         func_27D988
    ctx->pc = 0x296F60u;
    SET_GPR_U32(ctx, 31, 0x296F68u);
    ctx->pc = 0x296F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296F60u;
    // 0x296f64: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D988u, 0x296F60u, 0x296F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296F68u;
label_296f68:
    // 0x296f68: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x296f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x296f6c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x296f6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x296f70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x296f70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296f74: 0x26a4ac80  addiu       $a0, $s5, -0x5380
    ctx->pc = 0x296f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945920));
    // 0x296f78: 0x8e250078  lw          $a1, 0x78($s1)
    ctx->pc = 0x296f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x296f7c: 0xc0ad850  jal         func_2B6140
    ctx->pc = 0x296F7Cu;
    SET_GPR_U32(ctx, 31, 0x296F84u);
    ctx->pc = 0x296F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296F7Cu;
    // 0x296f80: 0x4600b580  add.s       $f22, $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6140u, 0x296F7Cu, 0x296F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296F84u;
label_296f84:
    // 0x296f84: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x296f84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296f88: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x296F88u;
    {
        const bool branch_taken_0x296f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x296F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296F88u;
        // 0x296f8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296f88) {
            ctx->pc = 0x296FA0u;
            goto label_296fa0;
        }
    }
    ctx->pc = 0x296F90u;
    // 0x296f90: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x296F90u;
    {
        const bool branch_taken_0x296f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x296f90) {
            ctx->pc = 0x296F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296F90u;
            // 0x296f94: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296FB0u;
            goto label_296fb0;
        }
    }
    ctx->pc = 0x296F98u;
    // 0x296f98: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x296F98u;
    {
        const bool branch_taken_0x296f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296F98u;
        // 0x296f9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296f98) {
            ctx->pc = 0x296FC8u;
            goto label_296fc8;
        }
    }
    ctx->pc = 0x296FA0u;
label_296fa0:
    // 0x296fa0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x296fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x296fa4: 0x26644ec0  addiu       $a0, $s3, 0x4EC0
    ctx->pc = 0x296fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20160));
    // 0x296fa8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x296FA8u;
    {
        const bool branch_taken_0x296fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296FA8u;
        // 0x296fac: 0x24a5bb38  addiu       $a1, $a1, -0x44C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296fa8) {
            ctx->pc = 0x296FB8u;
            goto label_296fb8;
        }
    }
    ctx->pc = 0x296FB0u;
label_296fb0:
    // 0x296fb0: 0x26644ec0  addiu       $a0, $s3, 0x4EC0
    ctx->pc = 0x296fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20160));
    // 0x296fb4: 0x24a5bb40  addiu       $a1, $a1, -0x44C0
    ctx->pc = 0x296fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949696));
label_296fb8:
    // 0x296fb8: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x296FB8u;
    SET_GPR_U32(ctx, 31, 0x296FC0u);
    ctx->pc = 0x296FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296FB8u;
    // 0x296fbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x296FB8u, 0x296FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296FC0u;
label_296fc0:
    // 0x296fc0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x296fc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296fc4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x296fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_296fc8:
    // 0x296fc8: 0xc0a0c96  jal         func_283258
    ctx->pc = 0x296FC8u;
    SET_GPR_U32(ctx, 31, 0x296FD0u);
    ctx->pc = 0x296FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296FC8u;
    // 0x296fcc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283258u, 0x296FC8u, 0x296FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296FD0u;
label_296fd0:
    // 0x296fd0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x296fd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x296fd4: 0x97a40000  lhu         $a0, 0x0($sp)
    ctx->pc = 0x296fd4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296fd8: 0xc0aea34  jal         func_2BA8D0
    ctx->pc = 0x296FD8u;
    SET_GPR_U32(ctx, 31, 0x296FE0u);
    ctx->pc = 0x296FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296FD8u;
    // 0x296fdc: 0x26b0ac80  addiu       $s0, $s5, -0x5380 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA8D0u, 0x296FD8u, 0x296FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296FE0u;
label_296fe0:
    // 0x296fe0: 0xc62e0020  lwc1        $f14, 0x20($s1)
    ctx->pc = 0x296fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x296fe4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x296fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296fe8: 0xc62f0024  lwc1        $f15, 0x24($s1)
    ctx->pc = 0x296fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x296fec: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x296fecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x296ff0: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x296ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x296ff4: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x296ff4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x296ff8: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x296ff8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x296ffc: 0xc09f662  jal         func_27D988
    ctx->pc = 0x296FFCu;
    SET_GPR_U32(ctx, 31, 0x297004u);
    ctx->pc = 0x297000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296FFCu;
    // 0x297000: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D988u, 0x296FFCu, 0x297004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297004u;
label_297004:
    // 0x297004: 0xc62c0020  lwc1        $f12, 0x20($s1)
    ctx->pc = 0x297004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x297008: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x297008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29700c: 0xc09f60e  jal         func_27D838
    ctx->pc = 0x29700Cu;
    SET_GPR_U32(ctx, 31, 0x297014u);
    ctx->pc = 0x297010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29700Cu;
    // 0x297010: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D838u, 0x29700Cu, 0x297014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297014u;
label_297014:
    // 0x297014: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x297014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x297018: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x297018u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x29701c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29701cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x297020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297024: 0x8e250078  lw          $a1, 0x78($s1)
    ctx->pc = 0x297024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x297028: 0x4601b580  add.s       $f22, $f22, $f1
    ctx->pc = 0x297028u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
    // 0x29702c: 0xc0ad87a  jal         func_2B61E8
    ctx->pc = 0x29702Cu;
    SET_GPR_U32(ctx, 31, 0x297034u);
    ctx->pc = 0x297030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29702Cu;
    // 0x297030: 0xc6350018  lwc1        $f21, 0x18($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61E8u, 0x29702Cu, 0x297034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297034u;
label_297034:
    // 0x297034: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x297034u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297038: 0xc62e0020  lwc1        $f14, 0x20($s1)
    ctx->pc = 0x297038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x29703c: 0xc62f0024  lwc1        $f15, 0x24($s1)
    ctx->pc = 0x29703cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x297040: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x297040u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x297044: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x297044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x297048: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x297048u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x29704c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x29704cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x297050: 0xc09f662  jal         func_27D988
    ctx->pc = 0x297050u;
    SET_GPR_U32(ctx, 31, 0x297058u);
    ctx->pc = 0x297054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297050u;
    // 0x297054: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D988u, 0x297050u, 0x297058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297058u;
label_297058:
    // 0x297058: 0xc62c0020  lwc1        $f12, 0x20($s1)
    ctx->pc = 0x297058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29705c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29705cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297060: 0xc09f60e  jal         func_27D838
    ctx->pc = 0x297060u;
    SET_GPR_U32(ctx, 31, 0x297068u);
    ctx->pc = 0x297064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297060u;
    // 0x297064: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D838u, 0x297060u, 0x297068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297068u;
label_297068:
    // 0x297068: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x297068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29706c: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x29706cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x297070: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x297070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297074: 0xc0a0c4c  jal         func_283130
    ctx->pc = 0x297074u;
    SET_GPR_U32(ctx, 31, 0x29707Cu);
    ctx->pc = 0x297078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297074u;
    // 0x297078: 0x24a5bb48  addiu       $a1, $a1, -0x44B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283130u, 0x297074u, 0x29707Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29707Cu;
label_29707c:
    // 0x29707c: 0xc62e0020  lwc1        $f14, 0x20($s1)
    ctx->pc = 0x29707cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x297080: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x297080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297084: 0xc62f0024  lwc1        $f15, 0x24($s1)
    ctx->pc = 0x297084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x297088: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x297088u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x29708c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x29708cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x297090: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x297090u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x297094: 0xc09f662  jal         func_27D988
    ctx->pc = 0x297094u;
    SET_GPR_U32(ctx, 31, 0x29709Cu);
    ctx->pc = 0x297098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297094u;
    // 0x297098: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D988u, 0x297094u, 0x29709Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29709Cu;
label_29709c:
    // 0x29709c: 0xc62c0020  lwc1        $f12, 0x20($s1)
    ctx->pc = 0x29709cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2970a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2970a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2970a4: 0xc09f60e  jal         func_27D838
    ctx->pc = 0x2970A4u;
    SET_GPR_U32(ctx, 31, 0x2970ACu);
    ctx->pc = 0x2970A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2970A4u;
    // 0x2970a8: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D838u, 0x2970A4u, 0x2970ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2970ACu;
label_2970ac:
    // 0x2970ac: 0x8e250078  lw          $a1, 0x78($s1)
    ctx->pc = 0x2970acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2970b0: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x2970b0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x2970b4: 0xc0ad888  jal         func_2B6220
    ctx->pc = 0x2970B4u;
    SET_GPR_U32(ctx, 31, 0x2970BCu);
    ctx->pc = 0x2970B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2970B4u;
    // 0x2970b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6220u, 0x2970B4u, 0x2970BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2970BCu;
label_2970bc:
    // 0x2970bc: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2970bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2970c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2970c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2970c4: 0xc62e0020  lwc1        $f14, 0x20($s1)
    ctx->pc = 0x2970c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2970c8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2970c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2970cc: 0xc62f0024  lwc1        $f15, 0x24($s1)
    ctx->pc = 0x2970ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2970d0: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x2970d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x2970d4: 0xc09f662  jal         func_27D988
    ctx->pc = 0x2970D4u;
    SET_GPR_U32(ctx, 31, 0x2970DCu);
    ctx->pc = 0x2970D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2970D4u;
    // 0x2970d8: 0x4600a406  mov.s       $f16, $f20 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D988u, 0x2970D4u, 0x2970DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2970DCu;
label_2970dc:
    // 0x2970dc: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x2970dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2970e0:
    // 0x2970e0: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x2970e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2970e4: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x2970e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2970e8: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x2970e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2970ec: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x2970ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2970f0: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x2970f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2970f4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2970f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2970f8: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x2970f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2970fc: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x2970fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x297100: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x297100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x297104: 0x3e00008  jr          $ra
    ctx->pc = 0x297104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297104u;
        // 0x297108: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29710Cu;
    // 0x29710c: 0x0  nop
    ctx->pc = 0x29710cu;
    // NOP
    ctx->pc = 0x297110u;
}
