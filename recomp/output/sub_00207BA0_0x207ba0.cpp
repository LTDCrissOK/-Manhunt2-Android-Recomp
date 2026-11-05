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

// Function: sub_00207BA0
// Address: 0x207ba0 - 0x207ef8
void sub_00207BA0_0x207ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207BA0_0x207ba0");
#endif

    switch (ctx->pc) {
        case 0x207bd8u: goto label_207bd8;
        case 0x207be4u: goto label_207be4;
        case 0x207becu: goto label_207bec;
        case 0x207c00u: goto label_207c00;
        case 0x207c0cu: goto label_207c0c;
        case 0x207c18u: goto label_207c18;
        case 0x207c2cu: goto label_207c2c;
        case 0x207c6cu: goto label_207c6c;
        case 0x207c80u: goto label_207c80;
        case 0x207c8cu: goto label_207c8c;
        case 0x207ca8u: goto label_207ca8;
        case 0x207cd8u: goto label_207cd8;
        case 0x207cf8u: goto label_207cf8;
        case 0x207d0cu: goto label_207d0c;
        case 0x207d1cu: goto label_207d1c;
        case 0x207d34u: goto label_207d34;
        case 0x207d48u: goto label_207d48;
        case 0x207d50u: goto label_207d50;
        case 0x207d58u: goto label_207d58;
        case 0x207d60u: goto label_207d60;
        case 0x207dc4u: goto label_207dc4;
        case 0x207de0u: goto label_207de0;
        case 0x207e08u: goto label_207e08;
        case 0x207e2cu: goto label_207e2c;
        case 0x207e34u: goto label_207e34;
        case 0x207e54u: goto label_207e54;
        case 0x207e70u: goto label_207e70;
        case 0x207e88u: goto label_207e88;
        case 0x207eb8u: goto label_207eb8;
        case 0x207ec4u: goto label_207ec4;
        default: break;
    }

    ctx->pc = 0x207ba0u;

    // 0x207ba0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x207ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x207ba4: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x207ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x207ba8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x207ba8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207bac: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x207bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x207bb0: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x207bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x207bb4: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x207bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x207bb8: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x207bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x207bbc: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x207bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x207bc0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x207bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x207bc4: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x207bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x207bc8: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x207bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x207bcc: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x207bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x207bd0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x207BD0u;
    SET_GPR_U32(ctx, 31, 0x207BD8u);
    ctx->pc = 0x207BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207BD0u;
    // 0x207bd4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x207BD0u, 0x207BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207BD8u;
label_207bd8:
    // 0x207bd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x207bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207bdc: 0xc0b4c04  jal         func_2D3010
    ctx->pc = 0x207BDCu;
    SET_GPR_U32(ctx, 31, 0x207BE4u);
    ctx->pc = 0x207BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207BDCu;
    // 0x207be0: 0x24050258  addiu       $a1, $zero, 0x258 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3010u, 0x207BDCu, 0x207BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207BE4u;
label_207be4:
    // 0x207be4: 0xc09eb04  jal         func_27AC10
    ctx->pc = 0x207BE4u;
    SET_GPR_U32(ctx, 31, 0x207BECu);
    ctx->pc = 0x207BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207BE4u;
    // 0x207be8: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC10u, 0x207BE4u, 0x207BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207BECu;
label_207bec:
    // 0x207bec: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x207becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x207bf0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x207bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207bf4: 0x8c6693c8  lw          $a2, -0x6C38($v1)
    ctx->pc = 0x207bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3F93C8u));
    // 0x207bf8: 0xc0d74c6  jal         func_35D318
    ctx->pc = 0x207BF8u;
    SET_GPR_U32(ctx, 31, 0x207C00u);
    ctx->pc = 0x207BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207BF8u;
    // 0x207bfc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x207BF8u, 0x207C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207C00u;
label_207c00:
    // 0x207c00: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x207c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x207c04: 0xc0b4c30  jal         func_2D30C0
    ctx->pc = 0x207C04u;
    SET_GPR_U32(ctx, 31, 0x207C0Cu);
    ctx->pc = 0x207C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207C04u;
    // 0x207c08: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D30C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30C0u, 0x207C04u, 0x207C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207C0Cu;
label_207c0c:
    // 0x207c0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x207c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207c10: 0xc0dbe86  jal         func_36FA18
    ctx->pc = 0x207C10u;
    SET_GPR_U32(ctx, 31, 0x207C18u);
    ctx->pc = 0x207C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207C10u;
    // 0x207c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x207C10u, 0x207C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207C18u;
label_207c18:
    // 0x207c18: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x207C18u;
    {
        const bool branch_taken_0x207c18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x207c18) {
            ctx->pc = 0x207C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207C18u;
            // 0x207c1c: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207C34u;
            goto label_207c34;
        }
    }
    ctx->pc = 0x207C20u;
    // 0x207c20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x207c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207c24: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x207C24u;
    SET_GPR_U32(ctx, 31, 0x207C2Cu);
    ctx->pc = 0x207C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207C24u;
    // 0x207c28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x207C24u, 0x207C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207C2Cu;
label_207c2c:
    // 0x207c2c: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x207C2Cu;
    {
        const bool branch_taken_0x207c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C2Cu;
        // 0x207c30: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c2c) {
            ctx->pc = 0x207EC8u;
            goto label_207ec8;
        }
    }
    ctx->pc = 0x207C34u;
label_207c34:
    // 0x207c34: 0x266333b0  addiu       $v1, $s3, 0x33B0
    ctx->pc = 0x207c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 13232));
    // 0x207c38: 0x26651760  addiu       $a1, $s3, 0x1760
    ctx->pc = 0x207c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 5984));
    // 0x207c3c: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x207c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
    // 0x207c40: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x207c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x207c44: 0x26662d80  addiu       $a2, $s3, 0x2D80
    ctx->pc = 0x207c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 11648));
    // 0x207c48: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x207c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x207c4c: 0x8c5e0008  lw          $fp, 0x8($v0)
    ctx->pc = 0x207c4cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x207c50: 0xafa6005c  sw          $a2, 0x5C($sp)
    ctx->pc = 0x207c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 6));
    // 0x207c54: 0x3c42018  mult        $a0, $fp, $a0
    ctx->pc = 0x207c54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x207c58: 0x27d1ffff  addiu       $s1, $fp, -0x1
    ctx->pc = 0x207c58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x207c5c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x207c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x207c60: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x207c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x207c64: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x207C64u;
    SET_GPR_U32(ctx, 31, 0x207C6Cu);
    ctx->pc = 0x207C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207C64u;
    // 0x207c68: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x207C64u, 0x207C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207C6Cu;
label_207c6c:
    // 0x207c6c: 0x24520010  addiu       $s2, $v0, 0x10
    ctx->pc = 0x207c6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x207c70: 0xac5e0000  sw          $fp, 0x0($v0)
    ctx->pc = 0x207c70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
    // 0x207c74: 0x13c00008  beqz        $fp, . + 4 + (0x8 << 2)
    ctx->pc = 0x207C74u;
    {
        const bool branch_taken_0x207c74 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x207C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C74u;
        // 0x207c78: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c74) {
            ctx->pc = 0x207C98u;
            goto label_207c98;
        }
    }
    ctx->pc = 0x207C7Cu;
    // 0x207c7c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x207c7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_207c80:
    // 0x207c80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x207c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207c84: 0xc0b4c04  jal         func_2D3010
    ctx->pc = 0x207C84u;
    SET_GPR_U32(ctx, 31, 0x207C8Cu);
    ctx->pc = 0x207C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207C84u;
    // 0x207c88: 0x24050258  addiu       $a1, $zero, 0x258 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3010u, 0x207C84u, 0x207C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207C8Cu;
label_207c8c:
    // 0x207c8c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x207c8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x207c90: 0x1634fffb  bne         $s1, $s4, . + 4 + (-0x5 << 2)
    ctx->pc = 0x207C90u;
    {
        const bool branch_taken_0x207c90 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x207C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C90u;
        // 0x207c94: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c90) {
            ctx->pc = 0x207C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207c80;
        }
    }
    ctx->pc = 0x207C98u;
label_207c98:
    // 0x207c98: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x207c98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x207c9c: 0x2404083f  addiu       $a0, $zero, 0x83F
    ctx->pc = 0x207c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2111));
    // 0x207ca0: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x207CA0u;
    SET_GPR_U32(ctx, 31, 0x207CA8u);
    ctx->pc = 0x207CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207CA0u;
    // 0x207ca4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x207CA0u, 0x207CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207CA8u;
label_207ca8:
    // 0x207ca8: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x207ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x207cac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x207cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x207cb0: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x207cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x207cb4: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x207cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x207cb8: 0x2483003f  addiu       $v1, $a0, 0x3F
    ctx->pc = 0x207cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x207cbc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x207cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x207cc0: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x207cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x207cc4: 0x1bc00054  blez        $fp, . + 4 + (0x54 << 2)
    ctx->pc = 0x207CC4u;
    {
        const bool branch_taken_0x207cc4 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x207CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207CC4u;
        // 0x207cc8: 0xae7e175c  sw          $fp, 0x175C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 5980), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207cc4) {
            ctx->pc = 0x207E18u;
            goto label_207e18;
        }
    }
    ctx->pc = 0x207CCCu;
    // 0x207ccc: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x207cccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x207cd0: 0x24100014  addiu       $s0, $zero, 0x14
    ctx->pc = 0x207cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x207cd4: 0x0  nop
    ctx->pc = 0x207cd4u;
    // NOP
label_207cd8:
    // 0x207cd8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x207cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x207cdc: 0x2308018  mult        $s0, $s1, $s0
    ctx->pc = 0x207cdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x207ce0: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x207ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x207ce4: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x207ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x207ce8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x207ce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207cec: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x207cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x207cf0: 0xc0b4c54  jal         func_2D3150
    ctx->pc = 0x207CF0u;
    SET_GPR_U32(ctx, 31, 0x207CF8u);
    ctx->pc = 0x207CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207CF0u;
    // 0x207cf4: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3150u, 0x207CF0u, 0x207CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207CF8u;
label_207cf8:
    // 0x207cf8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x207cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x207cfc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x207cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207d00: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x207d00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x207d04: 0xc0b4c9a  jal         func_2D3268
    ctx->pc = 0x207D04u;
    SET_GPR_U32(ctx, 31, 0x207D0Cu);
    ctx->pc = 0x207D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207D04u;
    // 0x207d08: 0x8e170004  lw          $s7, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3268u, 0x207D04u, 0x207D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207D0Cu;
label_207d0c:
    // 0x207d0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x207d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207d10: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x207d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207d14: 0xc0b4ce0  jal         func_2D3380
    ctx->pc = 0x207D14u;
    SET_GPR_U32(ctx, 31, 0x207D1Cu);
    ctx->pc = 0x207D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207D14u;
    // 0x207d18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3380u, 0x207D14u, 0x207D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207D1Cu;
label_207d1c:
    // 0x207d1c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x207D1Cu;
    {
        const bool branch_taken_0x207d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D1Cu;
        // 0x207d20: 0x8fa70058  lw          $a3, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d1c) {
            ctx->pc = 0x207DFCu;
            goto label_207dfc;
        }
    }
    ctx->pc = 0x207D24u;
    // 0x207d24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x207d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207d28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x207d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207d2c: 0xc0b4d14  jal         func_2D3450
    ctx->pc = 0x207D2Cu;
    SET_GPR_U32(ctx, 31, 0x207D34u);
    ctx->pc = 0x207D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207D2Cu;
    // 0x207d30: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3450u, 0x207D2Cu, 0x207D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207D34u;
label_207d34:
    // 0x207d34: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x207d34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x207d38: 0x26750024  addiu       $s5, $s3, 0x24
    ctx->pc = 0x207d38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
    // 0x207d3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x207D3Cu;
    {
        const bool branch_taken_0x207d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D3Cu;
        // 0x207d40: 0x26760028  addiu       $s6, $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d3c) {
            ctx->pc = 0x207D58u;
            goto label_207d58;
        }
    }
    ctx->pc = 0x207D44u;
    // 0x207d44: 0x0  nop
    ctx->pc = 0x207d44u;
    // NOP
label_207d48:
    // 0x207d48: 0xc081710  jal         func_205C40
    ctx->pc = 0x207D48u;
    SET_GPR_U32(ctx, 31, 0x207D50u);
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x207D48u, 0x207D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207D50u;
label_207d50:
    // 0x207d50: 0xc0817c0  jal         func_205F00
    ctx->pc = 0x207D50u;
    SET_GPR_U32(ctx, 31, 0x207D58u);
    ctx->pc = 0x207D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207D50u;
    // 0x207d54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205F00u, 0x207D50u, 0x207D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207D58u;
label_207d58:
    // 0x207d58: 0xc0b4d40  jal         func_2D3500
    ctx->pc = 0x207D58u;
    SET_GPR_U32(ctx, 31, 0x207D60u);
    ctx->pc = 0x207D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207D58u;
    // 0x207d5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3500u, 0x207D58u, 0x207D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207D60u;
label_207d60:
    // 0x207d60: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x207D60u;
    {
        const bool branch_taken_0x207d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D60u;
        // 0x207d64: 0x240300f8  addiu       $v1, $zero, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d60) {
            ctx->pc = 0x207D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207d48;
        }
    }
    ctx->pc = 0x207D68u;
    // 0x207d68: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x207d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x207d6c: 0x2238018  mult        $s0, $s1, $v1
    ctx->pc = 0x207d6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x207d70: 0x68850007  ldl         $a1, 0x7($a0)
    ctx->pc = 0x207d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x207d74: 0x6c850000  ldr         $a1, 0x0($a0)
    ctx->pc = 0x207d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x207d78: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x207d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x207d7c: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x207d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x207d80: 0x68820017  ldl         $v0, 0x17($a0)
    ctx->pc = 0x207d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x207d84: 0x6c820010  ldr         $v0, 0x10($a0)
    ctx->pc = 0x207d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x207d88: 0x6883001f  ldl         $v1, 0x1F($a0)
    ctx->pc = 0x207d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x207d8c: 0x6c830018  ldr         $v1, 0x18($a0)
    ctx->pc = 0x207d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x207d90: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x207d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x207d94: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x207d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x207d98: 0xb3a6003f  sdl         $a2, 0x3F($sp)
    ctx->pc = 0x207d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x207d9c: 0xb7a60038  sdr         $a2, 0x38($sp)
    ctx->pc = 0x207d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x207da0: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x207da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x207da4: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x207da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x207da8: 0xb3a3004f  sdl         $v1, 0x4F($sp)
    ctx->pc = 0x207da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x207dac: 0xb7a30048  sdr         $v1, 0x48($sp)
    ctx->pc = 0x207dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x207db0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x207db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207db4: 0xa3a0004f  sb          $zero, 0x4F($sp)
    ctx->pc = 0x207db4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 79), (uint8_t)GPR_U32(ctx, 0));
    // 0x207db8: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x207db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x207dbc: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x207DBCu;
    SET_GPR_U32(ctx, 31, 0x207DC4u);
    ctx->pc = 0x207DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207DBCu;
    // 0x207dc0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x207DBCu, 0x207DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207DC4u;
label_207dc4:
    // 0x207dc4: 0x2b01821  addu        $v1, $s5, $s0
    ctx->pc = 0x207dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x207dc8: 0x2163021  addu        $a2, $s0, $s6
    ctx->pc = 0x207dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x207dcc: 0xac770000  sw          $s7, 0x0($v1)
    ctx->pc = 0x207dccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 23));
    // 0x207dd0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x207dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x207dd4: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x207dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x207dd8: 0x2404003a  addiu       $a0, $zero, 0x3A
    ctx->pc = 0x207dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x207ddc: 0x0  nop
    ctx->pc = 0x207ddcu;
    // NOP
label_207de0:
    // 0x207de0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x207de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x207de4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x207de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x207de8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x207de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x207dec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x207decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x207df0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x207df0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x207df4: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x207DF4u;
    {
        const bool branch_taken_0x207df4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x207DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207DF4u;
        // 0x207df8: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207df4) {
            ctx->pc = 0x207DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207de0;
        }
    }
    ctx->pc = 0x207DFCu;
label_207dfc:
    // 0x207dfc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x207dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207e00: 0xc0b4cac  jal         func_2D32B0
    ctx->pc = 0x207E00u;
    SET_GPR_U32(ctx, 31, 0x207E08u);
    ctx->pc = 0x207E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207E00u;
    // 0x207e04: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D32B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D32B0u, 0x207E00u, 0x207E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207E08u;
label_207e08:
    // 0x207e08: 0x8fb10064  lw          $s1, 0x64($sp)
    ctx->pc = 0x207e08u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x207e0c: 0x23e102a  slt         $v0, $s1, $fp
    ctx->pc = 0x207e0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x207e10: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x207E10u;
    {
        const bool branch_taken_0x207e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E10u;
        // 0x207e14: 0x24100014  addiu       $s0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e10) {
            ctx->pc = 0x207CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207cd8;
        }
    }
    ctx->pc = 0x207E18u;
label_207e18:
    // 0x207e18: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x207e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x207e1c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x207E1Cu;
    {
        const bool branch_taken_0x207e1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x207e1c) {
            ctx->pc = 0x207E2Cu;
            goto label_207e2c;
        }
    }
    ctx->pc = 0x207E24u;
    // 0x207e24: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x207E24u;
    SET_GPR_U32(ctx, 31, 0x207E2Cu);
    ctx->pc = 0x207E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207E24u;
    // 0x207e28: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x207E24u, 0x207E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207E2Cu;
label_207e2c:
    // 0x207e2c: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x207E2Cu;
    SET_GPR_U32(ctx, 31, 0x207E34u);
    ctx->pc = 0x207E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207E2Cu;
    // 0x207e30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x207E2Cu, 0x207E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207E34u;
label_207e34:
    // 0x207e34: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x207e34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x207e38: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x207e38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x207e3c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x207E3Cu;
    {
        const bool branch_taken_0x207e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E3Cu;
        // 0x207e40: 0x8fa70060  lw          $a3, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e3c) {
            ctx->pc = 0x207E58u;
            goto label_207e58;
        }
    }
    ctx->pc = 0x207E44u;
    // 0x207e44: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x207e44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x207e48: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x207e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207e4c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x207E4Cu;
    SET_GPR_U32(ctx, 31, 0x207E54u);
    ctx->pc = 0x207E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207E4Cu;
    // 0x207e50: 0x24a50bb8  addiu       $a1, $a1, 0xBB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x207E4Cu, 0x207E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207E54u;
label_207e54:
    // 0x207e54: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x207e54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_207e58:
    // 0x207e58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x207e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207e5c: 0x8faa005c  lw          $t2, 0x5C($sp)
    ctx->pc = 0x207e5cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x207e60: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x207e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207e64: 0x2409003b  addiu       $t1, $zero, 0x3B
    ctx->pc = 0x207e64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x207e68: 0x240800ec  addiu       $t0, $zero, 0xEC
    ctx->pc = 0x207e68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
    // 0x207e6c: 0xa81018  mult        $v0, $a1, $t0
    ctx->pc = 0x207e6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_207e70:
    // 0x207e70: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x207e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x207e74: 0xa91018  mult        $v0, $a1, $t1
    ctx->pc = 0x207e74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x207e78: 0x4a1821  addu        $v1, $v0, $t2
    ctx->pc = 0x207e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x207e7c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x207e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x207e80: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x207e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x207e84: 0x0  nop
    ctx->pc = 0x207e84u;
    // NOP
label_207e88:
    // 0x207e88: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x207e88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x207e8c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x207e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x207e90: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x207e90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x207e94: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x207e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x207e98: 0x4a1fffb  bgez        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x207E98u;
    {
        const bool branch_taken_0x207e98 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x207E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E98u;
        // 0x207e9c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e98) {
            ctx->pc = 0x207E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207e88;
        }
    }
    ctx->pc = 0x207EA0u;
    // 0x207ea0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x207ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207ea4: 0x28a20018  slti        $v0, $a1, 0x18
    ctx->pc = 0x207ea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x207ea8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x207EA8u;
    {
        const bool branch_taken_0x207ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EA8u;
        // 0x207eac: 0xa81018  mult        $v0, $a1, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ea8) {
            ctx->pc = 0x207E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207e70;
        }
    }
    ctx->pc = 0x207EB0u;
    // 0x207eb0: 0xc0821e4  jal         func_208790
    ctx->pc = 0x207EB0u;
    SET_GPR_U32(ctx, 31, 0x207EB8u);
    ctx->pc = 0x207EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207EB0u;
    // 0x207eb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208790u, 0x207EB0u, 0x207EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207EB8u;
label_207eb8:
    // 0x207eb8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x207eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207ebc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x207EBCu;
    SET_GPR_U32(ctx, 31, 0x207EC4u);
    ctx->pc = 0x207EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207EBCu;
    // 0x207ec0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x207EBCu, 0x207EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207EC4u;
label_207ec4:
    // 0x207ec4: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x207ec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_207ec8:
    // 0x207ec8: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x207ec8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x207ecc: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x207eccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x207ed0: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x207ed0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207ed4: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x207ed4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x207ed8: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x207ed8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207edc: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x207edcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x207ee0: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x207ee0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x207ee4: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x207ee4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x207ee8: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x207ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x207eec: 0x3e00008  jr          $ra
    ctx->pc = 0x207EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EECu;
        // 0x207ef0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207EF4u;
    // 0x207ef4: 0x0  nop
    ctx->pc = 0x207ef4u;
    // NOP
    ctx->pc = 0x207ef8u;
}
