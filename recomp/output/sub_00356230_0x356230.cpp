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

// Function: sub_00356230
// Address: 0x356230 - 0x356380
void sub_00356230_0x356230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356230_0x356230");
#endif

    switch (ctx->pc) {
        case 0x356288u: goto label_356288;
        case 0x3562a4u: goto label_3562a4;
        case 0x3562b4u: goto label_3562b4;
        case 0x3562bcu: goto label_3562bc;
        case 0x3562d8u: goto label_3562d8;
        case 0x3562e4u: goto label_3562e4;
        case 0x3562ecu: goto label_3562ec;
        case 0x356318u: goto label_356318;
        case 0x356324u: goto label_356324;
        default: break;
    }

    ctx->pc = 0x356230u;

    // 0x356230: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x356230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x356234: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x356234u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x356238: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x356238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x35623c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x35623cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x356240: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x356240u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356244: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x356244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x356248: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x356248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35624c: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x35624cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x356250: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x356250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x356254: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x356254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x356258: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x356258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x35625c: 0x24b4cd80  addiu       $s4, $a1, -0x3280
    ctx->pc = 0x35625cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954368));
    // 0x356260: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x356260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x356264: 0x2495cd90  addiu       $s5, $a0, -0x3270
    ctx->pc = 0x356264u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954384));
    // 0x356268: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x356268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x35626c: 0x2457cda0  addiu       $s7, $v0, -0x3260
    ctx->pc = 0x35626cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954400));
    // 0x356270: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x356270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x356274: 0x247e5b60  addiu       $fp, $v1, 0x5B60
    ctx->pc = 0x356274u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 23392));
    // 0x356278: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x356278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35627c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x35627cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356280: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x356280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x356284: 0x26d00820  addiu       $s0, $s6, 0x820
    ctx->pc = 0x356284u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 2080));
label_356288:
    // 0x356288: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x356288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35628c: 0x139080  sll         $s2, $s3, 2
    ctx->pc = 0x35628cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x356290: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x356290u;
    {
        const bool branch_taken_0x356290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x356294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356290u;
        // 0x356294: 0x26d10818  addiu       $s1, $s6, 0x818 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 2072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356290) {
            ctx->pc = 0x3562C0u;
            goto label_3562c0;
        }
    }
    ctx->pc = 0x356298u;
    // 0x356298: 0x8e02fff8  lw          $v0, -0x8($s0)
    ctx->pc = 0x356298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
    // 0x35629c: 0xc074256  jal         func_1D0958
    ctx->pc = 0x35629Cu;
    SET_GPR_U32(ctx, 31, 0x3562A4u);
    ctx->pc = 0x3562A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35629Cu;
    // 0x3562a0: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0958u, 0x35629Cu, 0x3562A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3562A4u;
label_3562a4:
    // 0x3562a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3562a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3562a8: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x3562a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x3562ac: 0xc073e76  jal         func_1CF9D8
    ctx->pc = 0x3562ACu;
    SET_GPR_U32(ctx, 31, 0x3562B4u);
    ctx->pc = 0x3562B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3562ACu;
    // 0x3562b0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF9D8u, 0x3562ACu, 0x3562B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3562B4u;
label_3562b4:
    // 0x3562b4: 0xc073db6  jal         func_1CF6D8
    ctx->pc = 0x3562B4u;
    SET_GPR_U32(ctx, 31, 0x3562BCu);
    ctx->pc = 0x3562B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3562B4u;
    // 0x3562b8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF6D8u, 0x3562B4u, 0x3562BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3562BCu;
label_3562bc:
    // 0x3562bc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3562bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3562c0:
    // 0x3562c0: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x3562c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x3562c4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3562c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3562c8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3562C8u;
    {
        const bool branch_taken_0x3562c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3562c8) {
            ctx->pc = 0x3562DCu;
            goto label_3562dc;
        }
    }
    ctx->pc = 0x3562D0u;
    // 0x3562d0: 0xc0c3212  jal         func_30C848
    ctx->pc = 0x3562D0u;
    SET_GPR_U32(ctx, 31, 0x3562D8u);
    ctx->pc = 0x30C848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C848u, 0x3562D0u, 0x3562D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3562D8u;
label_3562d8:
    // 0x3562d8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3562d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3562dc:
    // 0x3562dc: 0xc0d73fc  jal         func_35CFF0
    ctx->pc = 0x3562DCu;
    SET_GPR_U32(ctx, 31, 0x3562E4u);
    ctx->pc = 0x3562E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3562DCu;
    // 0x3562e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFF0u, 0x3562DCu, 0x3562E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3562E4u;
label_3562e4:
    // 0x3562e4: 0xc0d73fc  jal         func_35CFF0
    ctx->pc = 0x3562E4u;
    SET_GPR_U32(ctx, 31, 0x3562ECu);
    ctx->pc = 0x3562E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3562E4u;
    // 0x3562e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFF0u, 0x3562E4u, 0x3562ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3562ECu;
label_3562ec:
    // 0x3562ec: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x3562ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3562f0: 0xfae10000  sqc2        $vf1, 0x0($s7)
    ctx->pc = 0x3562f0u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3562f4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3562f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3562f8: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x3562f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x3562fc: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x3562fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x356300: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x356300u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x356304: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x356304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x356308: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x356308u;
    {
        const bool branch_taken_0x356308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356308u;
        // 0x35630c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356308) {
            ctx->pc = 0x356288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356288;
        }
    }
    ctx->pc = 0x356310u;
    // 0x356310: 0xc073dce  jal         func_1CF738
    ctx->pc = 0x356310u;
    SET_GPR_U32(ctx, 31, 0x356318u);
    ctx->pc = 0x1CF738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF738u, 0x356310u, 0x356318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356318u;
label_356318:
    // 0x356318: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x356318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x35631c: 0xc0d73fc  jal         func_35CFF0
    ctx->pc = 0x35631Cu;
    SET_GPR_U32(ctx, 31, 0x356324u);
    ctx->pc = 0x356320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35631Cu;
    // 0x356320: 0x2484cd60  addiu       $a0, $a0, -0x32A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFF0u, 0x35631Cu, 0x356324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356324u;
label_356324:
    // 0x356324: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x356324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356328: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x356328u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35632c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35632cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x356330: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x356330u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x356334: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x356334u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x356338: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x356338u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35633c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x35633cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x356340: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x356340u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x356344: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x356344u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x356348: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x356348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35634c: 0x3e00008  jr          $ra
    ctx->pc = 0x35634Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35634Cu;
        // 0x356350: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35634Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356354u;
    // 0x356354: 0x0  nop
    ctx->pc = 0x356354u;
    // NOP
    // 0x356358: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x356358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x35635c: 0x0  nop
    ctx->pc = 0x35635cu;
    // NOP
    // 0x356360: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x356360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x356364: 0x0  nop
    ctx->pc = 0x356364u;
    // NOP
    // 0x356368: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x356368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x35636c: 0x0  nop
    ctx->pc = 0x35636cu;
    // NOP
    // 0x356370: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x356370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x356374: 0x0  nop
    ctx->pc = 0x356374u;
    // NOP
    // 0x356378: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x356378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x35637c: 0x0  nop
    ctx->pc = 0x35637cu;
    // NOP
    ctx->pc = 0x356380u;
}
