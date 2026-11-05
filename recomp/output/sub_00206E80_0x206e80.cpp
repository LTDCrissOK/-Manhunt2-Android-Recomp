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

// Function: sub_00206E80
// Address: 0x206e80 - 0x207228
void sub_00206E80_0x206e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206E80_0x206e80");
#endif

    switch (ctx->pc) {
        case 0x206ef8u: goto label_206ef8;
        case 0x206f04u: goto label_206f04;
        case 0x206f1cu: goto label_206f1c;
        case 0x206f28u: goto label_206f28;
        case 0x206f40u: goto label_206f40;
        case 0x206f4cu: goto label_206f4c;
        case 0x206f68u: goto label_206f68;
        case 0x206f8cu: goto label_206f8c;
        case 0x206fb0u: goto label_206fb0;
        case 0x206fc8u: goto label_206fc8;
        case 0x206fd8u: goto label_206fd8;
        case 0x206fecu: goto label_206fec;
        case 0x206ffcu: goto label_206ffc;
        case 0x207010u: goto label_207010;
        case 0x20701cu: goto label_20701c;
        case 0x207028u: goto label_207028;
        case 0x207034u: goto label_207034;
        case 0x207040u: goto label_207040;
        case 0x20704cu: goto label_20704c;
        case 0x20705cu: goto label_20705c;
        case 0x207084u: goto label_207084;
        case 0x207090u: goto label_207090;
        case 0x207098u: goto label_207098;
        case 0x2070a0u: goto label_2070a0;
        case 0x2070a8u: goto label_2070a8;
        case 0x2070d8u: goto label_2070d8;
        case 0x207118u: goto label_207118;
        case 0x207130u: goto label_207130;
        case 0x207188u: goto label_207188;
        case 0x207198u: goto label_207198;
        case 0x2071d0u: goto label_2071d0;
        case 0x2071dcu: goto label_2071dc;
        case 0x2071e8u: goto label_2071e8;
        case 0x2071f4u: goto label_2071f4;
        default: break;
    }

    ctx->pc = 0x206e80u;

    // 0x206e80: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x206e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x206e84: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x206e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x206e88: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x206e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x206e8c: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x206e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x206e90: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x206e90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206e94: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x206e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x206e98: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x206e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x206e9c: 0xffb700c8  sd          $s7, 0xC8($sp)
    ctx->pc = 0x206e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 23));
    // 0x206ea0: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x206ea0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x206ea4: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x206ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x206ea8: 0x27b60060  addiu       $s6, $sp, 0x60
    ctx->pc = 0x206ea8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x206eac: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x206eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x206eb0: 0x27be0040  addiu       $fp, $sp, 0x40
    ctx->pc = 0x206eb0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x206eb4: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x206eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x206eb8: 0x27b70070  addiu       $s7, $sp, 0x70
    ctx->pc = 0x206eb8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x206ebc: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x206ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x206ec0: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x206ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x206ec4: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x206ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x206ec8: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x206ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x206ecc: 0x8e85006c  lw          $a1, 0x6C($s4)
    ctx->pc = 0x206eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x206ed0: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x206ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x206ed4: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x206ED4u;
    {
        const bool branch_taken_0x206ed4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x206ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206ED4u;
        // 0x206ed8: 0xafa30088  sw          $v1, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206ed4) {
            ctx->pc = 0x206F1Cu;
            goto label_206f1c;
        }
    }
    ctx->pc = 0x206EDCu;
    // 0x206edc: 0x8ca3fff0  lw          $v1, -0x10($a1)
    ctx->pc = 0x206edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x206ee0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x206ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x206ee4: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x206ee4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x206ee8: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x206ee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x206eec: 0x50b10009  beql        $a1, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x206EECu;
    {
        const bool branch_taken_0x206eec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        if (branch_taken_0x206eec) {
            ctx->pc = 0x206EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206EECu;
            // 0x206ef0: 0x8e84006c  lw          $a0, 0x6C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206F14u;
            goto label_206f14;
        }
    }
    ctx->pc = 0x206EF4u;
    // 0x206ef4: 0x2631ffec  addiu       $s1, $s1, -0x14
    ctx->pc = 0x206ef4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967276));
label_206ef8:
    // 0x206ef8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x206ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x206efc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x206EFCu;
    SET_GPR_U32(ctx, 31, 0x206F04u);
    ctx->pc = 0x206F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206EFCu;
    // 0x206f00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x206EFCu, 0x206F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206F04u;
label_206f04:
    // 0x206f04: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x206f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x206f08: 0x5451fffb  bnel        $v0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x206F08u;
    {
        const bool branch_taken_0x206f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x206f08) {
            ctx->pc = 0x206F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206F08u;
            // 0x206f0c: 0x2631ffec  addiu       $s1, $s1, -0x14 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967276));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206ef8;
        }
    }
    ctx->pc = 0x206F10u;
    // 0x206f10: 0x8e84006c  lw          $a0, 0x6C($s4)
    ctx->pc = 0x206f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_206f14:
    // 0x206f14: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x206F14u;
    SET_GPR_U32(ctx, 31, 0x206F1Cu);
    ctx->pc = 0x206F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206F14u;
    // 0x206f18: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x206F14u, 0x206F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206F1Cu;
label_206f1c:
    // 0x206f1c: 0x24040290  addiu       $a0, $zero, 0x290
    ctx->pc = 0x206f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
    // 0x206f20: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x206F20u;
    SET_GPR_U32(ctx, 31, 0x206F28u);
    ctx->pc = 0x206F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206F20u;
    // 0x206f24: 0x2411001f  addiu       $s1, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x206F20u, 0x206F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206F28u;
label_206f28:
    // 0x206f28: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x206f28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x206f2c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x206f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x206f30: 0x24520010  addiu       $s2, $v0, 0x10
    ctx->pc = 0x206f30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x206f34: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x206f34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x206f38: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x206f38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f3c: 0x0  nop
    ctx->pc = 0x206f3cu;
    // NOP
label_206f40:
    // 0x206f40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f44: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x206F44u;
    SET_GPR_U32(ctx, 31, 0x206F4Cu);
    ctx->pc = 0x206F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206F44u;
    // 0x206f48: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x206F44u, 0x206F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206F4Cu;
label_206f4c:
    // 0x206f4c: 0x0  nop
    ctx->pc = 0x206f4cu;
    // NOP
    // 0x206f50: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x206F50u;
    {
        const bool branch_taken_0x206f50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x206F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F50u;
        // 0x206f54: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206f50) {
            ctx->pc = 0x206F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206f40;
        }
    }
    ctx->pc = 0x206F58u;
    // 0x206f58: 0xae92006c  sw          $s2, 0x6C($s4)
    ctx->pc = 0x206f58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 18));
    // 0x206f5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x206f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f60: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x206f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x206f64: 0x0  nop
    ctx->pc = 0x206f64u;
    // NOP
label_206f68:
    // 0x206f68: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x206f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x206f6c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x206f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x206f70: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x206f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x206f74: 0xa0400010  sb          $zero, 0x10($v0)
    ctx->pc = 0x206f74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x206f78: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x206F78u;
    {
        const bool branch_taken_0x206f78 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x206F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F78u;
        // 0x206f7c: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206f78) {
            ctx->pc = 0x206F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206f68;
        }
    }
    ctx->pc = 0x206F80u;
    // 0x206f80: 0xae800070  sw          $zero, 0x70($s4)
    ctx->pc = 0x206f80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 0));
    // 0x206f84: 0xc0b4c9a  jal         func_2D3268
    ctx->pc = 0x206F84u;
    SET_GPR_U32(ctx, 31, 0x206F8Cu);
    ctx->pc = 0x206F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206F84u;
    // 0x206f88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3268u, 0x206F84u, 0x206F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206F8Cu;
label_206f8c:
    // 0x206f8c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x206f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x206f90: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x206f90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x206f94: 0x8c459160  lw          $a1, -0x6EA0($v0)
    ctx->pc = 0x206f94u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3F9160u));
    // 0x206f98: 0x24838f20  addiu       $v1, $a0, -0x70E0
    ctx->pc = 0x206f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938400));
    // 0x206f9c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x206f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x206fa0: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x206fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x206fa4: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x206fa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x206fa8: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x206FA8u;
    SET_GPR_U32(ctx, 31, 0x206FB0u);
    ctx->pc = 0x206FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206FA8u;
    // 0x206fac: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x206FA8u, 0x206FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206FB0u;
label_206fb0:
    // 0x206fb0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x206fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x206fb4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x206fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x206fb8: 0x24450468  addiu       $a1, $v0, 0x468
    ctx->pc = 0x206fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1128));
    // 0x206fbc: 0x24660b60  addiu       $a2, $v1, 0xB60
    ctx->pc = 0x206fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2912));
    // 0x206fc0: 0xc0d74c6  jal         func_35D318
    ctx->pc = 0x206FC0u;
    SET_GPR_U32(ctx, 31, 0x206FC8u);
    ctx->pc = 0x206FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206FC0u;
    // 0x206fc4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x206FC0u, 0x206FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206FC8u;
label_206fc8:
    // 0x206fc8: 0x8fa60084  lw          $a2, 0x84($sp)
    ctx->pc = 0x206fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x206fcc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x206fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206fd0: 0xc0d74a8  jal         func_35D2A0
    ctx->pc = 0x206FD0u;
    SET_GPR_U32(ctx, 31, 0x206FD8u);
    ctx->pc = 0x206FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206FD0u;
    // 0x206fd4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D2A0u, 0x206FD0u, 0x206FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206FD8u;
label_206fd8:
    // 0x206fd8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x206fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x206fdc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x206fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206fe0: 0x24860b90  addiu       $a2, $a0, 0xB90
    ctx->pc = 0x206fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2960));
    // 0x206fe4: 0xc0d74c6  jal         func_35D318
    ctx->pc = 0x206FE4u;
    SET_GPR_U32(ctx, 31, 0x206FECu);
    ctx->pc = 0x206FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206FE4u;
    // 0x206fe8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x206FE4u, 0x206FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206FECu;
label_206fec:
    // 0x206fec: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x206fecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x206ff0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x206ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206ff4: 0xc0d74a8  jal         func_35D2A0
    ctx->pc = 0x206FF4u;
    SET_GPR_U32(ctx, 31, 0x206FFCu);
    ctx->pc = 0x206FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206FF4u;
    // 0x206ff8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D2A0u, 0x206FF4u, 0x206FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206FFCu;
label_206ffc:
    // 0x206ffc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x206ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x207000: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x207000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207004: 0x24a60b80  addiu       $a2, $a1, 0xB80
    ctx->pc = 0x207004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2944));
    // 0x207008: 0xc0d74c6  jal         func_35D318
    ctx->pc = 0x207008u;
    SET_GPR_U32(ctx, 31, 0x207010u);
    ctx->pc = 0x20700Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207008u;
    // 0x20700c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x207008u, 0x207010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207010u;
label_207010:
    // 0x207010: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x207010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207014: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x207014u;
    SET_GPR_U32(ctx, 31, 0x20701Cu);
    ctx->pc = 0x207018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207014u;
    // 0x207018: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x207014u, 0x20701Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20701Cu;
label_20701c:
    // 0x20701c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x20701cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207020: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x207020u;
    SET_GPR_U32(ctx, 31, 0x207028u);
    ctx->pc = 0x207024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207020u;
    // 0x207024: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x207020u, 0x207028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207028u;
label_207028:
    // 0x207028: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x207028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20702c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x20702Cu;
    SET_GPR_U32(ctx, 31, 0x207034u);
    ctx->pc = 0x207030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20702Cu;
    // 0x207030: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x20702Cu, 0x207034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207034u;
label_207034:
    // 0x207034: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x207034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207038: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x207038u;
    SET_GPR_U32(ctx, 31, 0x207040u);
    ctx->pc = 0x20703Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207038u;
    // 0x20703c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x207038u, 0x207040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207040u;
label_207040:
    // 0x207040: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x207040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x207044: 0xc0b4cc6  jal         func_2D3318
    ctx->pc = 0x207044u;
    SET_GPR_U32(ctx, 31, 0x20704Cu);
    ctx->pc = 0x207048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207044u;
    // 0x207048: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3318u, 0x207044u, 0x20704Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20704Cu;
label_20704c:
    // 0x20704c: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x20704Cu;
    {
        const bool branch_taken_0x20704c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20704Cu;
        // 0x207050: 0x8fa40088  lw          $a0, 0x88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20704c) {
            ctx->pc = 0x2071D4u;
            goto label_2071d4;
        }
    }
    ctx->pc = 0x207054u;
    // 0x207054: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x207054u;
    SET_GPR_U32(ctx, 31, 0x20705Cu);
    ctx->pc = 0x207058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207054u;
    // 0x207058: 0x2404083f  addiu       $a0, $zero, 0x83F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2111));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x207054u, 0x20705Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20705Cu;
label_20705c:
    // 0x20705c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x20705cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207060: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x207060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207064: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x207064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x207068: 0x26e3003f  addiu       $v1, $s7, 0x3F
    ctx->pc = 0x207068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 63));
    // 0x20706c: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x20706cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x207070: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x207070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207074: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x207074u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x207078: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x207078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20707c: 0xc0b4d14  jal         func_2D3450
    ctx->pc = 0x20707Cu;
    SET_GPR_U32(ctx, 31, 0x207084u);
    ctx->pc = 0x207080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20707Cu;
    // 0x207080: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3450u, 0x20707Cu, 0x207084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207084u;
label_207084:
    // 0x207084: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x207084u;
    {
        const bool branch_taken_0x207084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207084) {
            ctx->pc = 0x2070A0u;
            goto label_2070a0;
        }
    }
    ctx->pc = 0x20708Cu;
    // 0x20708c: 0x0  nop
    ctx->pc = 0x20708cu;
    // NOP
label_207090:
    // 0x207090: 0xc081710  jal         func_205C40
    ctx->pc = 0x207090u;
    SET_GPR_U32(ctx, 31, 0x207098u);
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x207090u, 0x207098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207098u;
label_207098:
    // 0x207098: 0xc0817c0  jal         func_205F00
    ctx->pc = 0x207098u;
    SET_GPR_U32(ctx, 31, 0x2070A0u);
    ctx->pc = 0x20709Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207098u;
    // 0x20709c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205F00u, 0x207098u, 0x2070A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2070A0u;
label_2070a0:
    // 0x2070a0: 0xc0b4d40  jal         func_2D3500
    ctx->pc = 0x2070A0u;
    SET_GPR_U32(ctx, 31, 0x2070A8u);
    ctx->pc = 0x2070A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2070A0u;
    // 0x2070a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3500u, 0x2070A0u, 0x2070A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2070A8u;
label_2070a8:
    // 0x2070a8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2070A8u;
    {
        const bool branch_taken_0x2070a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2070a8) {
            ctx->pc = 0x207090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207090;
        }
    }
    ctx->pc = 0x2070B0u;
    // 0x2070b0: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x2070b0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2070b4: 0x1a400042  blez        $s2, . + 4 + (0x42 << 2)
    ctx->pc = 0x2070B4u;
    {
        const bool branch_taken_0x2070b4 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x2070b4) {
            ctx->pc = 0x2071C0u;
            goto label_2071c0;
        }
    }
    ctx->pc = 0x2070BCu;
    // 0x2070bc: 0x1a40002d  blez        $s2, . + 4 + (0x2D << 2)
    ctx->pc = 0x2070BCu;
    {
        const bool branch_taken_0x2070bc = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2070C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2070BCu;
        // 0x2070c0: 0x26110004  addiu       $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2070bc) {
            ctx->pc = 0x207174u;
            goto label_207174;
        }
    }
    ctx->pc = 0x2070C4u;
    // 0x2070c4: 0x3c0b02d  daddu       $s6, $fp, $zero
    ctx->pc = 0x2070c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2070c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2070c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2070cc: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x2070ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2070d0: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x2070d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2070d4: 0x0  nop
    ctx->pc = 0x2070d4u;
    // NOP
label_2070d8:
    // 0x2070d8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2070d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2070dc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2070dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2070e0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2070e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2070e4: 0xb0182a  slt         $v1, $a1, $s0
    ctx->pc = 0x2070e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2070e8: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x2070e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x2070ec: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x2070ecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x2070f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2070f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2070f4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2070f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2070f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2070f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2070fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2070fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x207100: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x207100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207104: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x207104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207108: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x207108u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x20710c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x20710cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x207110: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x207110u;
    SET_GPR_U32(ctx, 31, 0x207118u);
    ctx->pc = 0x207114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207110u;
    // 0x207114: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x207110u, 0x207118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207118u;
label_207118:
    // 0x207118: 0x2d08021  addu        $s0, $s6, $s0
    ctx->pc = 0x207118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x20711c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x20711cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207120: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x207120u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x207124: 0x8e84006c  lw          $a0, 0x6C($s4)
    ctx->pc = 0x207124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x207128: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x207128u;
    SET_GPR_U32(ctx, 31, 0x207130u);
    ctx->pc = 0x20712Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207128u;
    // 0x20712c: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x207128u, 0x207130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207130u;
label_207130:
    // 0x207130: 0x8e83006c  lw          $v1, 0x6C($s4)
    ctx->pc = 0x207130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x207134: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x207134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x207138: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x207138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x20713c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x20713cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x207140: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x207140u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x207144: 0x8e84006c  lw          $a0, 0x6C($s4)
    ctx->pc = 0x207144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x207148: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x207148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20714c: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x20714cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x207150: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x207150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x207154: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x207154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x207158: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x207158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20715c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x20715cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x207160: 0x8e83006c  lw          $v1, 0x6C($s4)
    ctx->pc = 0x207160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x207164: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x207164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x207168: 0xa07e0010  sb          $fp, 0x10($v1)
    ctx->pc = 0x207168u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 30));
    // 0x20716c: 0x16a0ffda  bnez        $s5, . + 4 + (-0x26 << 2)
    ctx->pc = 0x20716Cu;
    {
        const bool branch_taken_0x20716c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x207170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20716Cu;
        // 0x207170: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20716c) {
            ctx->pc = 0x2070D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2070d8;
        }
    }
    ctx->pc = 0x207174u;
label_207174:
    // 0x207174: 0xae920070  sw          $s2, 0x70($s4)
    ctx->pc = 0x207174u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 18));
    // 0x207178: 0x1a400011  blez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x207178u;
    {
        const bool branch_taken_0x207178 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x20717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207178u;
        // 0x20717c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207178) {
            ctx->pc = 0x2071C0u;
            goto label_2071c0;
        }
    }
    ctx->pc = 0x207180u;
    // 0x207180: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x207180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x207184: 0x0  nop
    ctx->pc = 0x207184u;
    // NOP
label_207188:
    // 0x207188: 0x1a400009  blez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x207188u;
    {
        const bool branch_taken_0x207188 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x20718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207188u;
        // 0x20718c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207188) {
            ctx->pc = 0x2071B0u;
            goto label_2071b0;
        }
    }
    ctx->pc = 0x207190u;
    // 0x207190: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x207190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x207194: 0x0  nop
    ctx->pc = 0x207194u;
    // NOP
label_207198:
    // 0x207198: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x207198u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x20719c: 0x0  nop
    ctx->pc = 0x20719cu;
    // NOP
    // 0x2071a0: 0x0  nop
    ctx->pc = 0x2071a0u;
    // NOP
    // 0x2071a4: 0x0  nop
    ctx->pc = 0x2071a4u;
    // NOP
    // 0x2071a8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2071A8u;
    {
        const bool branch_taken_0x2071a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2071ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071A8u;
        // 0x2071ac: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2071a8) {
            ctx->pc = 0x207198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207198;
        }
    }
    ctx->pc = 0x2071B0u;
label_2071b0:
    // 0x2071b0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2071b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2071b4: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x2071b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2071b8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2071B8u;
    {
        const bool branch_taken_0x2071b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2071BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071B8u;
        // 0x2071bc: 0x24640001  addiu       $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2071b8) {
            ctx->pc = 0x207188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207188;
        }
    }
    ctx->pc = 0x2071C0u;
label_2071c0:
    // 0x2071c0: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x2071C0u;
    {
        const bool branch_taken_0x2071c0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2071C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071C0u;
        // 0x2071c4: 0x8fa40088  lw          $a0, 0x88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2071c0) {
            ctx->pc = 0x2071D4u;
            goto label_2071d4;
        }
    }
    ctx->pc = 0x2071C8u;
    // 0x2071c8: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x2071C8u;
    SET_GPR_U32(ctx, 31, 0x2071D0u);
    ctx->pc = 0x2071CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2071C8u;
    // 0x2071cc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2071C8u, 0x2071D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2071D0u;
label_2071d0:
    // 0x2071d0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2071d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2071d4:
    // 0x2071d4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2071D4u;
    SET_GPR_U32(ctx, 31, 0x2071DCu);
    ctx->pc = 0x2071D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2071D4u;
    // 0x2071d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2071D4u, 0x2071DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2071DCu;
label_2071dc:
    // 0x2071dc: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x2071dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x2071e0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2071E0u;
    SET_GPR_U32(ctx, 31, 0x2071E8u);
    ctx->pc = 0x2071E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2071E0u;
    // 0x2071e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2071E0u, 0x2071E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2071E8u;
label_2071e8:
    // 0x2071e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2071e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2071ec: 0xc0b4cac  jal         func_2D32B0
    ctx->pc = 0x2071ECu;
    SET_GPR_U32(ctx, 31, 0x2071F4u);
    ctx->pc = 0x2071F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2071ECu;
    // 0x2071f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D32B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D32B0u, 0x2071ECu, 0x2071F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2071F4u;
label_2071f4:
    // 0x2071f4: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x2071f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2071f8: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x2071f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2071fc: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x2071fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x207200: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x207200u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x207204: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x207204u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x207208: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x207208u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x20720c: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x20720cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x207210: 0xdfb700c8  ld          $s7, 0xC8($sp)
    ctx->pc = 0x207210u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x207214: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x207214u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x207218: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x207218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x20721c: 0x3e00008  jr          $ra
    ctx->pc = 0x20721Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20721Cu;
        // 0x207220: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20721Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207224u;
    // 0x207224: 0x0  nop
    ctx->pc = 0x207224u;
    // NOP
    ctx->pc = 0x207228u;
}
