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

// Function: sub_00371280
// Address: 0x371280 - 0x3713d8
void sub_00371280_0x371280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371280_0x371280");
#endif

    switch (ctx->pc) {
        case 0x3712b8u: goto label_3712b8;
        case 0x3712c0u: goto label_3712c0;
        case 0x371314u: goto label_371314;
        case 0x37136cu: goto label_37136c;
        case 0x371380u: goto label_371380;
        case 0x371388u: goto label_371388;
        case 0x371398u: goto label_371398;
        default: break;
    }

    ctx->pc = 0x371280u;

    // 0x371280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x371280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x371284: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x371284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x371288: 0x8c62cc40  lw          $v0, -0x33C0($v1)
    ctx->pc = 0x371288u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FCC40u));
    // 0x37128c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x37128cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x371290: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x371290u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371294: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x371294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x371298: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x371298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x37129c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x37129cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3712a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3712a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3712a4: 0x129900  sll         $s3, $s2, 4
    ctx->pc = 0x3712a4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x3712a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3712a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3712ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3712acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3712b0: 0xac62cc40  sw          $v0, -0x33C0($v1)
    ctx->pc = 0x3712b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954048), GPR_U32(ctx, 2));
    // 0x3712b4: 0x0  nop
    ctx->pc = 0x3712b4u;
    // NOP
label_3712b8:
    // 0x3712b8: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x3712B8u;
    SET_GPR_U32(ctx, 31, 0x3712C0u);
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x3712B8u, 0x3712C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3712C0u;
label_3712c0:
    // 0x3712c0: 0x8e11003c  lw          $s1, 0x3C($s0)
    ctx->pc = 0x3712c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x3712c4: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x3712c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3712c8: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x3712c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x3712cc: 0xb11023  subu        $v0, $a1, $s1
    ctx->pc = 0x3712ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x3712d0: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x3712d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3712d4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3712D4u;
    {
        const bool branch_taken_0x3712d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3712D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3712D4u;
        // 0x3712d8: 0x22103  sra         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3712d4) {
            ctx->pc = 0x3712F0u;
            goto label_3712f0;
        }
    }
    ctx->pc = 0x3712DCu;
    // 0x3712dc: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x3712dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x3712e0: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3712e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3712e4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3712e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3712e8: 0x44182b  sltu        $v1, $v0, $a0
    ctx->pc = 0x3712e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3712ec: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x3712ecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_3712f0:
    // 0x3712f0: 0x244102b  sltu        $v0, $s2, $a0
    ctx->pc = 0x3712f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3712f4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3712F4u;
    {
        const bool branch_taken_0x3712f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3712F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3712F4u;
        // 0x3712f8: 0x2331021  addu        $v0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3712f4) {
            ctx->pc = 0x37131Cu;
            goto label_37131c;
        }
    }
    ctx->pc = 0x3712FCu;
    // 0x3712fc: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3712FCu;
    {
        const bool branch_taken_0x3712fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x371300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3712FCu;
        // 0x371300: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3712fc) {
            ctx->pc = 0x37130Cu;
            goto label_37130c;
        }
    }
    ctx->pc = 0x371304u;
    // 0x371304: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x371304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x371308: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x371308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_37130c:
    // 0x37130c: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x37130Cu;
    SET_GPR_U32(ctx, 31, 0x371314u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x37130Cu, 0x371314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371314u;
label_371314:
    // 0x371314: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x371314u;
    {
        const bool branch_taken_0x371314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371314u;
        // 0x371318: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371314) {
            ctx->pc = 0x3713B8u;
            goto label_3713b8;
        }
    }
    ctx->pc = 0x37131Cu;
label_37131c:
    // 0x37131c: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x37131cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x371320: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x371320u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x371324: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x371324u;
    {
        const bool branch_taken_0x371324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x371324) {
            ctx->pc = 0x371374u;
            goto label_371374;
        }
    }
    ctx->pc = 0x37132Cu;
    // 0x37132c: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x37132cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x371330: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x371330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x371334: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x371334u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x371338: 0x22103  sra         $a0, $v0, 4
    ctx->pc = 0x371338u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
    // 0x37133c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37133Cu;
    {
        const bool branch_taken_0x37133c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x371340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37133Cu;
        // 0x371340: 0x244102b  sltu        $v0, $s2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37133c) {
            ctx->pc = 0x371350u;
            goto label_371350;
        }
    }
    ctx->pc = 0x371344u;
    // 0x371344: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x371344u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x371348: 0x22103  sra         $a0, $v0, 4
    ctx->pc = 0x371348u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
    // 0x37134c: 0x244102b  sltu        $v0, $s2, $a0
    ctx->pc = 0x37134cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_371350:
    // 0x371350: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x371350u;
    {
        const bool branch_taken_0x371350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x371354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371350u;
        // 0x371354: 0x731021  addu        $v0, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371350) {
            ctx->pc = 0x371374u;
            goto label_371374;
        }
    }
    ctx->pc = 0x371358u;
    // 0x371358: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x371358u;
    {
        const bool branch_taken_0x371358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x37135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371358u;
        // 0x37135c: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371358) {
            ctx->pc = 0x371364u;
            goto label_371364;
        }
    }
    ctx->pc = 0x371360u;
    // 0x371360: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x371360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
label_371364:
    // 0x371364: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x371364u;
    SET_GPR_U32(ctx, 31, 0x37136Cu);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x371364u, 0x37136Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37136Cu;
label_37136c:
    // 0x37136c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x37136Cu;
    {
        const bool branch_taken_0x37136c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37136Cu;
        // 0x371370: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37136c) {
            ctx->pc = 0x3713B8u;
            goto label_3713b8;
        }
    }
    ctx->pc = 0x371374u;
label_371374:
    // 0x371374: 0x8e110040  lw          $s1, 0x40($s0)
    ctx->pc = 0x371374u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x371378: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x371378u;
    SET_GPR_U32(ctx, 31, 0x371380u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x371378u, 0x371380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371380u;
label_371380:
    // 0x371380: 0xc0dc472  jal         func_3711C8
    ctx->pc = 0x371380u;
    SET_GPR_U32(ctx, 31, 0x371388u);
    ctx->pc = 0x371384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371380u;
    // 0x371384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3711C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3711C8u, 0x371380u, 0x371388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371388u;
label_371388:
    // 0x371388: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x371388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x37138c: 0x1622ffca  bne         $s1, $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x37138Cu;
    {
        const bool branch_taken_0x37138c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x37138c) {
            ctx->pc = 0x3712B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3712b8;
        }
    }
    ctx->pc = 0x371394u;
    // 0x371394: 0x0  nop
    ctx->pc = 0x371394u;
    // NOP
label_371398:
    // 0x371398: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x371398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x37139c: 0x0  nop
    ctx->pc = 0x37139cu;
    // NOP
    // 0x3713a0: 0x0  nop
    ctx->pc = 0x3713a0u;
    // NOP
    // 0x3713a4: 0x0  nop
    ctx->pc = 0x3713a4u;
    // NOP
    // 0x3713a8: 0x1222fffb  beq         $s1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3713A8u;
    {
        const bool branch_taken_0x3713a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3713a8) {
            ctx->pc = 0x371398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371398;
        }
    }
    ctx->pc = 0x3713B0u;
    // 0x3713b0: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
    ctx->pc = 0x3713B0u;
    {
        const bool branch_taken_0x3713b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3713b0) {
            ctx->pc = 0x3712B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3712b8;
        }
    }
    ctx->pc = 0x3713B8u;
label_3713b8:
    // 0x3713b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3713b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3713bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3713bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3713c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3713c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3713c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3713c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3713c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3713c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3713cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3713CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3713D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3713CCu;
        // 0x3713d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3713CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3713D4u;
    // 0x3713d4: 0x0  nop
    ctx->pc = 0x3713d4u;
    // NOP
    ctx->pc = 0x3713d8u;
}
