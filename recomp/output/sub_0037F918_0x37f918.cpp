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

// Function: sub_0037F918
// Address: 0x37f918 - 0x37fa40
void sub_0037F918_0x37f918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037F918_0x37f918");
#endif

    switch (ctx->pc) {
        case 0x37f958u: goto label_37f958;
        case 0x37f968u: goto label_37f968;
        case 0x37f998u: goto label_37f998;
        case 0x37f9b8u: goto label_37f9b8;
        case 0x37f9d8u: goto label_37f9d8;
        case 0x37f9f8u: goto label_37f9f8;
        case 0x37fa10u: goto label_37fa10;
        case 0x37fa20u: goto label_37fa20;
        case 0x37fa34u: goto label_37fa34;
        default: break;
    }

    ctx->pc = 0x37f918u;

    // 0x37f918: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37f918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37f91c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x37f91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x37f920: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x37f920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x37f924: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x37f924u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f928: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x37f928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x37f92c: 0x266200b0  addiu       $v0, $s3, 0xB0
    ctx->pc = 0x37f92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
    // 0x37f930: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x37f930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x37f934: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x37f934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x37f938: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37f938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f93c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37f93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x37f940: 0x8c500064  lw          $s0, 0x64($v0)
    ctx->pc = 0x37f940u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x37f944: 0x1211000e  beq         $s0, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x37F944u;
    {
        const bool branch_taken_0x37f944 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x37F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F944u;
        // 0x37f948: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f944) {
            ctx->pc = 0x37F980u;
            goto label_37f980;
        }
    }
    ctx->pc = 0x37F94Cu;
    // 0x37f94c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x37f94cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37f950: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x37f950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x37f954: 0x0  nop
    ctx->pc = 0x37f954u;
    // NOP
label_37f958:
    // 0x37f958: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x37F958u;
    {
        const bool branch_taken_0x37f958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37f958) {
            ctx->pc = 0x37F95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37F958u;
            // 0x37f95c: 0x8e100064  lw          $s0, 0x64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37F96Cu;
            goto label_37f96c;
        }
    }
    ctx->pc = 0x37F960u;
    // 0x37f960: 0xc0e008a  jal         func_380228
    ctx->pc = 0x37F960u;
    SET_GPR_U32(ctx, 31, 0x37F968u);
    ctx->pc = 0x37F964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F960u;
    // 0x37f964: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380228u, 0x37F960u, 0x37F968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F968u;
label_37f968:
    // 0x37f968: 0x8e100064  lw          $s0, 0x64($s0)
    ctx->pc = 0x37f968u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_37f96c:
    // 0x37f96c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x37f96cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f970: 0x2111826  xor         $v1, $s0, $s1
    ctx->pc = 0x37f970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 17));
    // 0x37f974: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x37f974u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x37f978: 0x5040fff7  beql        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x37F978u;
    {
        const bool branch_taken_0x37f978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37f978) {
            ctx->pc = 0x37F97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37F978u;
            // 0x37f97c: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37F958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37f958;
        }
    }
    ctx->pc = 0x37F980u;
label_37f980:
    // 0x37f980: 0x267100b0  addiu       $s1, $s3, 0xB0
    ctx->pc = 0x37f980u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
    // 0x37f984: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x37f984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x37f988: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x37f988u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f98c: 0x1092000d  beq         $a0, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x37F98Cu;
    {
        const bool branch_taken_0x37f98c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        ctx->pc = 0x37F990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F98Cu;
        // 0x37f990: 0x32940001  andi        $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f98c) {
            ctx->pc = 0x37F9C4u;
            goto label_37f9c4;
        }
    }
    ctx->pc = 0x37F994u;
    // 0x37f994: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x37f994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_37f998:
    // 0x37f998: 0x8c900064  lw          $s0, 0x64($a0)
    ctx->pc = 0x37f998u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x37f99c: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x37f99cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x37f9a0: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x37f9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x37f9a4: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x37f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x37f9a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37F9A8u;
    {
        const bool branch_taken_0x37f9a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F9A8u;
        // 0x37f9ac: 0xac620064  sw          $v0, 0x64($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f9a8) {
            ctx->pc = 0x37F9B8u;
            goto label_37f9b8;
        }
    }
    ctx->pc = 0x37F9B0u;
    // 0x37f9b0: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x37F9B0u;
    SET_GPR_U32(ctx, 31, 0x37F9B8u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x37F9B0u, 0x37F9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F9B8u;
label_37f9b8:
    // 0x37f9b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37f9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f9bc: 0x5491fff6  bnel        $a0, $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x37F9BCu;
    {
        const bool branch_taken_0x37f9bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        if (branch_taken_0x37f9bc) {
            ctx->pc = 0x37F9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37F9BCu;
            // 0x37f9c0: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37F998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37f998;
        }
    }
    ctx->pc = 0x37F9C4u;
label_37f9c4:
    // 0x37f9c4: 0x8e440064  lw          $a0, 0x64($s2)
    ctx->pc = 0x37f9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x37f9c8: 0x5092000f  beql        $a0, $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x37F9C8u;
    {
        const bool branch_taken_0x37f9c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        if (branch_taken_0x37f9c8) {
            ctx->pc = 0x37F9CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37F9C8u;
            // 0x37f9cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37FA08u;
            goto label_37fa08;
        }
    }
    ctx->pc = 0x37F9D0u;
    // 0x37f9d0: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x37f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x37f9d4: 0x0  nop
    ctx->pc = 0x37f9d4u;
    // NOP
label_37f9d8:
    // 0x37f9d8: 0x8c900064  lw          $s0, 0x64($a0)
    ctx->pc = 0x37f9d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x37f9dc: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x37f9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x37f9e0: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x37f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x37f9e4: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x37f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x37f9e8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37F9E8u;
    {
        const bool branch_taken_0x37f9e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F9E8u;
        // 0x37f9ec: 0xac620064  sw          $v0, 0x64($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f9e8) {
            ctx->pc = 0x37F9F8u;
            goto label_37f9f8;
        }
    }
    ctx->pc = 0x37F9F0u;
    // 0x37f9f0: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x37F9F0u;
    SET_GPR_U32(ctx, 31, 0x37F9F8u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x37F9F0u, 0x37F9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F9F8u;
label_37f9f8:
    // 0x37f9f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37f9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f9fc: 0x5492fff6  bnel        $a0, $s2, . + 4 + (-0xA << 2)
    ctx->pc = 0x37F9FCu;
    {
        const bool branch_taken_0x37f9fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 18));
        if (branch_taken_0x37f9fc) {
            ctx->pc = 0x37FA00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37F9FCu;
            // 0x37fa00: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37F9D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37f9d8;
        }
    }
    ctx->pc = 0x37FA04u;
    // 0x37fa04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x37fa04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_37fa08:
    // 0x37fa08: 0xc0e032a  jal         func_380CA8
    ctx->pc = 0x37FA08u;
    SET_GPR_U32(ctx, 31, 0x37FA10u);
    ctx->pc = 0x37FA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FA08u;
    // 0x37fa0c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380CA8u, 0x37FA08u, 0x37FA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FA10u;
label_37fa10:
    // 0x37fa10: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x37FA10u;
    {
        const bool branch_taken_0x37fa10 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FA10u;
        // 0x37fa14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fa10) {
            ctx->pc = 0x37FA24u;
            goto label_37fa24;
        }
    }
    ctx->pc = 0x37FA18u;
    // 0x37fa18: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x37FA18u;
    SET_GPR_U32(ctx, 31, 0x37FA20u);
    ctx->pc = 0x37FA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FA18u;
    // 0x37fa1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x37FA18u, 0x37FA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FA20u;
label_37fa20:
    // 0x37fa20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37fa20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_37fa24:
    // 0x37fa24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x37fa24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37fa28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x37fa28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37fa2c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x37fa2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37fa30: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x37fa30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_37fa34:
    // 0x37fa34: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x37fa34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37fa38: 0x3e00008  jr          $ra
    ctx->pc = 0x37FA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FA38u;
        // 0x37fa3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37FA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37FA40u;
}
