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

// Function: sub_00175248
// Address: 0x175248 - 0x175368
void sub_00175248_0x175248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175248_0x175248");
#endif

    switch (ctx->pc) {
        case 0x17527cu: goto label_17527c;
        case 0x1752d8u: goto label_1752d8;
        case 0x1752ecu: goto label_1752ec;
        case 0x1752fcu: goto label_1752fc;
        case 0x175308u: goto label_175308;
        case 0x175314u: goto label_175314;
        case 0x175320u: goto label_175320;
        case 0x17532cu: goto label_17532c;
        case 0x175348u: goto label_175348;
        default: break;
    }

    ctx->pc = 0x175248u;

    // 0x175248: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x175248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17524c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17524cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x175250: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175254: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x175254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175258: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x175258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17525c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17525cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x175260: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x175260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x175264: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x175264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x175268: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x175268u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x17526c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x17526Cu;
    {
        const bool branch_taken_0x17526c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17526Cu;
        // 0x175270: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17526c) {
            ctx->pc = 0x17534Cu;
            goto label_17534c;
        }
    }
    ctx->pc = 0x175274u;
    // 0x175274: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x175274u;
    SET_GPR_U32(ctx, 31, 0x17527Cu);
    ctx->pc = 0x175278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175274u;
    // 0x175278: 0x8e44005c  lw          $a0, 0x5C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x175274u, 0x17527Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17527Cu;
label_17527c:
    // 0x17527c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17527cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175280: 0x12800031  beqz        $s4, . + 4 + (0x31 << 2)
    ctx->pc = 0x175280u;
    {
        const bool branch_taken_0x175280 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x175284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175280u;
        // 0x175284: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175280) {
            ctx->pc = 0x175348u;
            goto label_175348;
        }
    }
    ctx->pc = 0x175288u;
    // 0x175288: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x175288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x17528c: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x17528cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x175290: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x175290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x175294: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x175294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x175298: 0x1080002c  beqz        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x175298u;
    {
        const bool branch_taken_0x175298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175298u;
        // 0x17529c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175298) {
            ctx->pc = 0x17534Cu;
            goto label_17534c;
        }
    }
    ctx->pc = 0x1752A0u;
    // 0x1752a0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1752a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1752a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1752a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1752a8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1752a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1752ac: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x1752acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x1752b0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1752B0u;
    {
        const bool branch_taken_0x1752b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1752b0) {
            ctx->pc = 0x1752B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1752B0u;
            // 0x1752b4: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1752C0u;
            goto label_1752c0;
        }
    }
    ctx->pc = 0x1752B8u;
    // 0x1752b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1752B8u;
    {
        const bool branch_taken_0x1752b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1752BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1752B8u;
        // 0x1752bc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1752b8) {
            ctx->pc = 0x1752C8u;
            goto label_1752c8;
        }
    }
    ctx->pc = 0x1752C0u;
label_1752c0:
    // 0x1752c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1752c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1752c4: 0x24730070  addiu       $s3, $v1, 0x70
    ctx->pc = 0x1752c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1752c8:
    // 0x1752c8: 0x12600020  beqz        $s3, . + 4 + (0x20 << 2)
    ctx->pc = 0x1752C8u;
    {
        const bool branch_taken_0x1752c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1752CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1752C8u;
        // 0x1752cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1752c8) {
            ctx->pc = 0x17534Cu;
            goto label_17534c;
        }
    }
    ctx->pc = 0x1752D0u;
    // 0x1752d0: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x1752D0u;
    SET_GPR_U32(ctx, 31, 0x1752D8u);
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x1752D0u, 0x1752D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1752D8u;
label_1752d8:
    // 0x1752d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1752d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1752dc: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1752DCu;
    {
        const bool branch_taken_0x1752dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1752E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1752DCu;
        // 0x1752e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1752dc) {
            ctx->pc = 0x175348u;
            goto label_175348;
        }
    }
    ctx->pc = 0x1752E4u;
    // 0x1752e4: 0xc04f8fc  jal         func_13E3F0
    ctx->pc = 0x1752E4u;
    SET_GPR_U32(ctx, 31, 0x1752ECu);
    ctx->pc = 0x1752E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1752E4u;
    // 0x1752e8: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x1752E4u, 0x1752ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1752ECu;
label_1752ec:
    // 0x1752ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1752ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1752f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1752f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1752f4: 0xc0462e4  jal         func_118B90
    ctx->pc = 0x1752F4u;
    SET_GPR_U32(ctx, 31, 0x1752FCu);
    ctx->pc = 0x1752F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1752F4u;
    // 0x1752f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118B90u, 0x1752F4u, 0x1752FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1752FCu;
label_1752fc:
    // 0x1752fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1752fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175300: 0xc046190  jal         func_118640
    ctx->pc = 0x175300u;
    SET_GPR_U32(ctx, 31, 0x175308u);
    ctx->pc = 0x175304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175300u;
    // 0x175304: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118640u, 0x175300u, 0x175308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175308u;
label_175308:
    // 0x175308: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x175308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17530c: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x17530Cu;
    SET_GPR_U32(ctx, 31, 0x175314u);
    ctx->pc = 0x175310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17530Cu;
    // 0x175310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x17530Cu, 0x175314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175314u;
label_175314:
    // 0x175314: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x175314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175318: 0xc046058  jal         func_118160
    ctx->pc = 0x175318u;
    SET_GPR_U32(ctx, 31, 0x175320u);
    ctx->pc = 0x17531Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175318u;
    // 0x17531c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x175318u, 0x175320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175320u;
label_175320:
    // 0x175320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175324: 0xc0460c4  jal         func_118310
    ctx->pc = 0x175324u;
    SET_GPR_U32(ctx, 31, 0x17532Cu);
    ctx->pc = 0x175328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175324u;
    // 0x175328: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118310u, 0x175324u, 0x17532Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17532Cu;
label_17532c:
    // 0x17532c: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x17532cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x175330: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x175330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x175334: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x175334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x175338: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x175338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17533c: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x17533cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x175340: 0xc04adbe  jal         func_12B6F8
    ctx->pc = 0x175340u;
    SET_GPR_U32(ctx, 31, 0x175348u);
    ctx->pc = 0x175344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175340u;
    // 0x175344: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B6F8u, 0x175340u, 0x175348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175348u;
label_175348:
    // 0x175348: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17534c:
    // 0x17534c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17534cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175350: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x175350u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175354: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x175354u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175358: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x175358u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17535c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17535cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x175360: 0x3e00008  jr          $ra
    ctx->pc = 0x175360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175360u;
        // 0x175364: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175368u;
}
