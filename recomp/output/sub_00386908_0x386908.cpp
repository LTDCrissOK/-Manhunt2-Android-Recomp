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

// Function: sub_00386908
// Address: 0x386908 - 0x386d28
void sub_00386908_0x386908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386908_0x386908");
#endif

    switch (ctx->pc) {
        case 0x3869a8u: goto label_3869a8;
        case 0x3869dcu: goto label_3869dc;
        case 0x386c68u: goto label_386c68;
        case 0x386c74u: goto label_386c74;
        case 0x386cb8u: goto label_386cb8;
        case 0x386cc8u: goto label_386cc8;
        default: break;
    }

    ctx->pc = 0x386908u;

    // 0x386908: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x386908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x38690c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38690cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x386910: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x386910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
    // 0x386914: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x386914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
    // 0x386918: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x386918u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38691c: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x38691cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
    // 0x386920: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x386920u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386924: 0xffbf01a0  sd          $ra, 0x1A0($sp)
    ctx->pc = 0x386924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 31));
    // 0x386928: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x386928u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38692c: 0xffb70180  sd          $s7, 0x180($sp)
    ctx->pc = 0x38692cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 23));
    // 0x386930: 0xffb60170  sd          $s6, 0x170($sp)
    ctx->pc = 0x386930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 22));
    // 0x386934: 0xffb50160  sd          $s5, 0x160($sp)
    ctx->pc = 0x386934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 21));
    // 0x386938: 0xffb30140  sd          $s3, 0x140($sp)
    ctx->pc = 0x386938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 19));
    // 0x38693c: 0xffb10120  sd          $s1, 0x120($sp)
    ctx->pc = 0x38693cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 17));
    // 0x386940: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x386940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x386944: 0x8e430184  lw          $v1, 0x184($s2)
    ctx->pc = 0x386944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
    // 0x386948: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x386948u;
    {
        const bool branch_taken_0x386948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x38694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386948u;
        // 0x38694c: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386948) {
            ctx->pc = 0x386964u;
            goto label_386964;
        }
    }
    ctx->pc = 0x386950u;
    // 0x386950: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x386950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x386954: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x386954u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386958: 0x3c0b02d  daddu       $s6, $fp, $zero
    ctx->pc = 0x386958u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38695c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38695Cu;
    {
        const bool branch_taken_0x38695c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38695Cu;
        // 0x386960: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38695c) {
            ctx->pc = 0x38696Cu;
            goto label_38696c;
        }
    }
    ctx->pc = 0x386964u;
label_386964:
    // 0x386964: 0x3c0a82d  daddu       $s5, $fp, $zero
    ctx->pc = 0x386964u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386968: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x386968u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38696c:
    // 0x38696c: 0x8e530868  lw          $s3, 0x868($s2)
    ctx->pc = 0x38696cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
    // 0x386970: 0x8e49008c  lw          $t1, 0x8C($s2)
    ctx->pc = 0x386970u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x386974: 0x26630018  addiu       $v1, $s3, 0x18
    ctx->pc = 0x386974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x386978: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x386978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x38697c: 0x26770010  addiu       $s7, $s3, 0x10
    ctx->pc = 0x38697cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x386980: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x386980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x386984: 0x11200024  beqz        $t1, . + 4 + (0x24 << 2)
    ctx->pc = 0x386984u;
    {
        const bool branch_taken_0x386984 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x386988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386984u;
        // 0x386988: 0xafa20108  sw          $v0, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386984) {
            ctx->pc = 0x386A18u;
            goto label_386a18;
        }
    }
    ctx->pc = 0x38698Cu;
    // 0x38698c: 0xdea30018  ld          $v1, 0x18($s5)
    ctx->pc = 0x38698cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x386990: 0x4630025  bgezl       $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x386990u;
    {
        const bool branch_taken_0x386990 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x386990) {
            ctx->pc = 0x386994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386990u;
            // 0x386994: 0xfee30000  sd          $v1, 0x0($s7) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386A28u;
            goto label_386a28;
        }
    }
    ctx->pc = 0x386998u;
    // 0x386998: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x386998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x38699c: 0x4420022  bltzl       $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x38699Cu;
    {
        const bool branch_taken_0x38699c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x38699c) {
            ctx->pc = 0x3869A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38699Cu;
            // 0x3869a0: 0xfee30000  sd          $v1, 0x0($s7) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386A28u;
            goto label_386a28;
        }
    }
    ctx->pc = 0x3869A4u;
    // 0x3869a4: 0xde4500a0  ld          $a1, 0xA0($s2)
    ctx->pc = 0x3869a4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 160)));
label_3869a8:
    // 0x3869a8: 0x8e50009c  lw          $s0, 0x9C($s2)
    ctx->pc = 0x3869a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x3869ac: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3869acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3869b0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x3869b0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x3869b4: 0xde440090  ld          $a0, 0x90($s2)
    ctx->pc = 0x3869b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x3869b8: 0x30b10001  andi        $s1, $a1, 0x1
    ctx->pc = 0x3869b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3869bc: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3869bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3869c0: 0x2308024  and         $s0, $s1, $s0
    ctx->pc = 0x3869c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x3869c4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3869c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3869c8: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x3869c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3869cc: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x3869ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3869d0: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x3869d0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x3869d4: 0xc0f4b84  jal         func_3D2E10
    ctx->pc = 0x3869D4u;
    SET_GPR_U32(ctx, 31, 0x3869DCu);
    ctx->pc = 0x3869D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3869D4u;
    // 0x3869d8: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2E10u, 0x3869D4u, 0x3869DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3869DCu;
label_3869dc:
    // 0x3869dc: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x3869dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x3869e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3869e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3869e4: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x3869e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x3869e8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3869e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3869ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3869ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3869f0: 0xfe630010  sd          $v1, 0x10($s3)
    ctx->pc = 0x3869f0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 3));
    // 0x3869f4: 0xde420090  ld          $v0, 0x90($s2)
    ctx->pc = 0x3869f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x3869f8: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x3869f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x3869fc: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3869FCu;
    {
        const bool branch_taken_0x3869fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x386A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3869FCu;
        // 0x386a00: 0x8e530868  lw          $s3, 0x868($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3869fc) {
            ctx->pc = 0x386A24u;
            goto label_386a24;
        }
    }
    ctx->pc = 0x386A04u;
    // 0x386a04: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x386a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x386a08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x386a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x386a0c: 0x8e49008c  lw          $t1, 0x8C($s2)
    ctx->pc = 0x386a0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x386a10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x386A10u;
    {
        const bool branch_taken_0x386a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386A10u;
        // 0x386a14: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386a10) {
            ctx->pc = 0x386A28u;
            goto label_386a28;
        }
    }
    ctx->pc = 0x386A18u;
label_386a18:
    // 0x386a18: 0xdea30018  ld          $v1, 0x18($s5)
    ctx->pc = 0x386a18u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x386a1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x386A1Cu;
    {
        const bool branch_taken_0x386a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386A1Cu;
        // 0x386a20: 0xfee30000  sd          $v1, 0x0($s7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386a1c) {
            ctx->pc = 0x386A28u;
            goto label_386a28;
        }
    }
    ctx->pc = 0x386A24u;
label_386a24:
    // 0x386a24: 0x8e49008c  lw          $t1, 0x8C($s2)
    ctx->pc = 0x386a24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_386a28:
    // 0x386a28: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x386a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x386a2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x386a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x386a30: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x386A30u;
    {
        const bool branch_taken_0x386a30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x386a30) {
            ctx->pc = 0x386A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386A30u;
            // 0x386a34: 0x8ea60040  lw          $a2, 0x40($s5) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386A58u;
            goto label_386a58;
        }
    }
    ctx->pc = 0x386A38u;
    // 0x386a38: 0xde420100  ld          $v0, 0x100($s2)
    ctx->pc = 0x386a38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x386a3c: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x386A3Cu;
    {
        const bool branch_taken_0x386a3c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x386a3c) {
            ctx->pc = 0x386A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386A3Cu;
            // 0x386a40: 0x8ea60040  lw          $a2, 0x40($s5) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386A58u;
            goto label_386a58;
        }
    }
    ctx->pc = 0x386A44u;
    // 0x386a44: 0xfee20000  sd          $v0, 0x0($s7)
    ctx->pc = 0x386a44u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
    // 0x386a48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x386a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x386a4c: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x386a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x386a50: 0xfe420100  sd          $v0, 0x100($s2)
    ctx->pc = 0x386a50u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 2));
    // 0x386a54: 0x8ea60040  lw          $a2, 0x40($s5)
    ctx->pc = 0x386a54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_386a58:
    // 0x386a58: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x386a58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x386a5c: 0x8ea5003c  lw          $a1, 0x3C($s5)
    ctx->pc = 0x386a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x386a60: 0x266a0028  addiu       $t2, $s3, 0x28
    ctx->pc = 0x386a60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x386a64: 0x8ea40038  lw          $a0, 0x38($s5)
    ctx->pc = 0x386a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x386a68: 0x63178  dsll        $a2, $a2, 5
    ctx->pc = 0x386a68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 5);
    // 0x386a6c: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x386a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x386a70: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x386a70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x386a74: 0x421f8  dsll        $a0, $a0, 7
    ctx->pc = 0x386a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 7);
    // 0x386a78: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x386a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x386a7c: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x386a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x386a80: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x386a80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x386a84: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x386a84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x386a88: 0xdea50020  ld          $a1, 0x20($s5)
    ctx->pc = 0x386a88u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x386a8c: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x386a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x386a90: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x386a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x386a94: 0x8ea7002c  lw          $a3, 0x2C($s5)
    ctx->pc = 0x386a94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x386a98: 0x266b0030  addiu       $t3, $s3, 0x30
    ctx->pc = 0x386a98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x386a9c: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x386a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x386aa0: 0x266c0038  addiu       $t4, $s3, 0x38
    ctx->pc = 0x386aa0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    // 0x386aa4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x386aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x386aa8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x386aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x386aac: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x386aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x386ab0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x386ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x386ab4: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x386ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x386ab8: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x386ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x386abc: 0xfe4800a0  sd          $t0, 0xA0($s2)
    ctx->pc = 0x386abcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 8));
    // 0x386ac0: 0x11200018  beqz        $t1, . + 4 + (0x18 << 2)
    ctx->pc = 0x386AC0u;
    {
        const bool branch_taken_0x386ac0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x386AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386AC0u;
        // 0x386ac4: 0xae430098  sw          $v1, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386ac0) {
            ctx->pc = 0x386B24u;
            goto label_386b24;
        }
    }
    ctx->pc = 0x386AC8u;
    // 0x386ac8: 0xdec20018  ld          $v0, 0x18($s6)
    ctx->pc = 0x386ac8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x386acc: 0x4430017  bgezl       $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x386ACCu;
    {
        const bool branch_taken_0x386acc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x386acc) {
            ctx->pc = 0x386AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386ACCu;
            // 0x386ad0: 0xfd420000  sd          $v0, 0x0($t2) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386B2Cu;
            goto label_386b2c;
        }
    }
    ctx->pc = 0x386AD4u;
    // 0x386ad4: 0x4620015  bltzl       $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x386AD4u;
    {
        const bool branch_taken_0x386ad4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x386ad4) {
            ctx->pc = 0x386AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386AD4u;
            // 0x386ad8: 0xfd420000  sd          $v0, 0x0($t2) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386B2Cu;
            goto label_386b2c;
        }
    }
    ctx->pc = 0x386ADCu;
    // 0x386adc: 0xde440090  ld          $a0, 0x90($s2)
    ctx->pc = 0x386adcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x386ae0: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x386ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x386ae4: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x386ae4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x386ae8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x386ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x386aec: 0x427f8  dsll        $a0, $a0, 31
    ctx->pc = 0x386aecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 31);
    // 0x386af0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x386af0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x386af4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x386af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x386af8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x386af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x386afc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x386afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x386b00: 0xfe630028  sd          $v1, 0x28($s3)
    ctx->pc = 0x386b00u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 3));
    // 0x386b04: 0xde420090  ld          $v0, 0x90($s2)
    ctx->pc = 0x386b04u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x386b08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x386b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x386b0c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x386B0Cu;
    {
        const bool branch_taken_0x386b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386B0Cu;
        // 0x386b10: 0x8e530868  lw          $s3, 0x868($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386b0c) {
            ctx->pc = 0x386B2Cu;
            goto label_386b2c;
        }
    }
    ctx->pc = 0x386B14u;
    // 0x386b14: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x386b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x386b18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x386b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x386b1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x386B1Cu;
    {
        const bool branch_taken_0x386b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386B1Cu;
        // 0x386b20: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386b1c) {
            ctx->pc = 0x386B2Cu;
            goto label_386b2c;
        }
    }
    ctx->pc = 0x386B24u;
label_386b24:
    // 0x386b24: 0xdec20018  ld          $v0, 0x18($s6)
    ctx->pc = 0x386b24u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x386b28: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x386b28u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
label_386b2c:
    // 0x386b2c: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x386b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x386b30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x386b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x386b34: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x386B34u;
    {
        const bool branch_taken_0x386b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x386b34) {
            ctx->pc = 0x386B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386B34u;
            // 0x386b38: 0x8ec60040  lw          $a2, 0x40($s6) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386B5Cu;
            goto label_386b5c;
        }
    }
    ctx->pc = 0x386B3Cu;
    // 0x386b3c: 0xde420100  ld          $v0, 0x100($s2)
    ctx->pc = 0x386b3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x386b40: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x386B40u;
    {
        const bool branch_taken_0x386b40 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x386b40) {
            ctx->pc = 0x386B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386B40u;
            // 0x386b44: 0x8ec60040  lw          $a2, 0x40($s6) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386B5Cu;
            goto label_386b5c;
        }
    }
    ctx->pc = 0x386B48u;
    // 0x386b48: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x386b48u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x386b4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x386b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x386b50: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x386b50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x386b54: 0xfe420100  sd          $v0, 0x100($s2)
    ctx->pc = 0x386b54u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 2));
    // 0x386b58: 0x8ec60040  lw          $a2, 0x40($s6)
    ctx->pc = 0x386b58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
label_386b5c:
    // 0x386b5c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x386b5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x386b60: 0x8ec5003c  lw          $a1, 0x3C($s6)
    ctx->pc = 0x386b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 60)));
    // 0x386b64: 0x8ec20034  lw          $v0, 0x34($s6)
    ctx->pc = 0x386b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x386b68: 0x63178  dsll        $a2, $a2, 5
    ctx->pc = 0x386b68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 5);
    // 0x386b6c: 0x8ec7002c  lw          $a3, 0x2C($s6)
    ctx->pc = 0x386b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x386b70: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x386b70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x386b74: 0x8ec40038  lw          $a0, 0x38($s6)
    ctx->pc = 0x386b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 56)));
    // 0x386b78: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x386b78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x386b7c: 0x8ec30030  lw          $v1, 0x30($s6)
    ctx->pc = 0x386b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x386b80: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x386b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x386b84: 0xdec50020  ld          $a1, 0x20($s6)
    ctx->pc = 0x386b84u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x386b88: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x386b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x386b8c: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x386b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x386b90: 0x421f8  dsll        $a0, $a0, 7
    ctx->pc = 0x386b90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 7);
    // 0x386b94: 0x8fa80100  lw          $t0, 0x100($sp)
    ctx->pc = 0x386b94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x386b98: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x386b98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x386b9c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x386b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x386ba0: 0xfd650000  sd          $a1, 0x0($t3)
    ctx->pc = 0x386ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 5));
    // 0x386ba4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x386ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x386ba8: 0x8e4500f4  lw          $a1, 0xF4($s2)
    ctx->pc = 0x386ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
    // 0x386bac: 0xfd820000  sd          $v0, 0x0($t4)
    ctx->pc = 0x386bacu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
    // 0x386bb0: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x386bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x386bb4: 0xfe4900a0  sd          $t1, 0xA0($s2)
    ctx->pc = 0x386bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 9));
    // 0x386bb8: 0xae430098  sw          $v1, 0x98($s2)
    ctx->pc = 0x386bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
    // 0x386bbc: 0xde620020  ld          $v0, 0x20($s3)
    ctx->pc = 0x386bbcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x386bc0: 0x8ea4005c  lw          $a0, 0x5C($s5)
    ctx->pc = 0x386bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
    // 0x386bc4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x386bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x386bc8: 0xde630038  ld          $v1, 0x38($s3)
    ctx->pc = 0x386bc8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x386bcc: 0xae4400e0  sw          $a0, 0xE0($s2)
    ctx->pc = 0x386bccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 4));
    // 0x386bd0: 0xfe620020  sd          $v0, 0x20($s3)
    ctx->pc = 0x386bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 2));
    // 0x386bd4: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x386bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x386bd8: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x386bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x386bdc: 0xfe630038  sd          $v1, 0x38($s3)
    ctx->pc = 0x386bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 56), GPR_U64(ctx, 3));
    // 0x386be0: 0xae4400e4  sw          $a0, 0xE4($s2)
    ctx->pc = 0x386be0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 4));
    // 0x386be4: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x386be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x386be8: 0xae4200c8  sw          $v0, 0xC8($s2)
    ctx->pc = 0x386be8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 2));
    // 0x386bec: 0x8ec30048  lw          $v1, 0x48($s6)
    ctx->pc = 0x386becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
    // 0x386bf0: 0xae4300cc  sw          $v1, 0xCC($s2)
    ctx->pc = 0x386bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 3));
    // 0x386bf4: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x386bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x386bf8: 0xae4200d4  sw          $v0, 0xD4($s2)
    ctx->pc = 0x386bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
    // 0x386bfc: 0x8ec30054  lw          $v1, 0x54($s6)
    ctx->pc = 0x386bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 84)));
    // 0x386c00: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x386C00u;
    {
        const bool branch_taken_0x386c00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x386C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386C00u;
        // 0x386c04: 0xae4300d8  sw          $v1, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386c00) {
            ctx->pc = 0x386C2Cu;
            goto label_386c2c;
        }
    }
    ctx->pc = 0x386C08u;
    // 0x386c08: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x386c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x386c0c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x386c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x386c10: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x386c10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x386c14: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x386C14u;
    {
        const bool branch_taken_0x386c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386C14u;
        // 0x386c18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386c14) {
            ctx->pc = 0x386C44u;
            goto label_386c44;
        }
    }
    ctx->pc = 0x386C1Cu;
    // 0x386c1c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x386c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x386c20: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x386c20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x386c24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x386C24u;
    {
        const bool branch_taken_0x386c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386C24u;
        // 0x386c28: 0x38500001  xori        $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x386c24) {
            ctx->pc = 0x386C44u;
            goto label_386c44;
        }
    }
    ctx->pc = 0x386C2Cu;
label_386c2c:
    // 0x386c2c: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x386c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x386c30: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x386c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x386c34: 0x8e4200f8  lw          $v0, 0xF8($s2)
    ctx->pc = 0x386c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x386c38: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x386c38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x386c3c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x386c3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x386c40: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x386c40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_386c44:
    // 0x386c44: 0x5600000e  bnel        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x386C44u;
    {
        const bool branch_taken_0x386c44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x386c44) {
            ctx->pc = 0x386C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386C44u;
            // 0x386c48: 0x8e830028  lw          $v1, 0x28($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386C80u;
            goto label_386c80;
        }
    }
    ctx->pc = 0x386C4Cu;
    // 0x386c4c: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x386c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x386c50: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x386c50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x386c54: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x386c54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x386c58: 0x24c69378  addiu       $a2, $a2, -0x6C88
    ctx->pc = 0x386c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939512));
    // 0x386c5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x386c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386c60: 0xc0f303e  jal         func_3CC0F8
    ctx->pc = 0x386C60u;
    SET_GPR_U32(ctx, 31, 0x386C68u);
    ctx->pc = 0x386C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386C60u;
    // 0x386c64: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC0F8u, 0x386C60u, 0x386C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386C68u;
label_386c68:
    // 0x386c68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x386c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386c6c: 0xc0e28f8  jal         func_38A3E0
    ctx->pc = 0x386C6Cu;
    SET_GPR_U32(ctx, 31, 0x386C74u);
    ctx->pc = 0x386C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386C6Cu;
    // 0x386c70: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3E0u, 0x386C6Cu, 0x386C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386C74u;
label_386c74:
    // 0x386c74: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x386C74u;
    {
        const bool branch_taken_0x386c74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x386C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386C74u;
        // 0x386c78: 0xdfbf01a0  ld          $ra, 0x1A0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386c74) {
            ctx->pc = 0x386CFCu;
            goto label_386cfc;
        }
    }
    ctx->pc = 0x386C7Cu;
    // 0x386c7c: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x386c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_386c80:
    // 0x386c80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x386c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x386c84: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x386C84u;
    {
        const bool branch_taken_0x386c84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x386C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386C84u;
        // 0x386c88: 0xdfbf01a0  ld          $ra, 0x1A0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386c84) {
            ctx->pc = 0x386CFCu;
            goto label_386cfc;
        }
    }
    ctx->pc = 0x386C8Cu;
    // 0x386c8c: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x386c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x386c90: 0x5443001b  bnel        $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x386C90u;
    {
        const bool branch_taken_0x386c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x386c90) {
            ctx->pc = 0x386C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386C90u;
            // 0x386c94: 0xdfbe0190  ld          $fp, 0x190($sp) (Delay Slot)
            SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386D00u;
            goto label_386d00;
        }
    }
    ctx->pc = 0x386C98u;
    // 0x386c98: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x386c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x386c9c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x386c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x386ca0: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x386ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x386ca4: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x386ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x386ca8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x386CA8u;
    {
        const bool branch_taken_0x386ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x386CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386CA8u;
        // 0x386cac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386ca8) {
            ctx->pc = 0x386CC0u;
            goto label_386cc0;
        }
    }
    ctx->pc = 0x386CB0u;
    // 0x386cb0: 0xc0e1c0e  jal         func_387038
    ctx->pc = 0x386CB0u;
    SET_GPR_U32(ctx, 31, 0x386CB8u);
    ctx->pc = 0x386CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386CB0u;
    // 0x386cb4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387038u, 0x386CB0u, 0x386CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386CB8u;
label_386cb8:
    // 0x386cb8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x386CB8u;
    {
        const bool branch_taken_0x386cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386CB8u;
        // 0x386cbc: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386cb8) {
            ctx->pc = 0x386CCCu;
            goto label_386ccc;
        }
    }
    ctx->pc = 0x386CC0u;
label_386cc0:
    // 0x386cc0: 0xc0e18ee  jal         func_3863B8
    ctx->pc = 0x386CC0u;
    SET_GPR_U32(ctx, 31, 0x386CC8u);
    ctx->pc = 0x386CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386CC0u;
    // 0x386cc4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3863B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3863B8u, 0x386CC0u, 0x386CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386CC8u;
label_386cc8:
    // 0x386cc8: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x386cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_386ccc:
    // 0x386ccc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x386cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x386cd0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x386cd0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x386cd4: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x386cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x386cd8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x386cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x386cdc: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x386CDCu;
    {
        const bool branch_taken_0x386cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x386CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386CDCu;
        // 0x386ce0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386cdc) {
            ctx->pc = 0x386CF4u;
            goto label_386cf4;
        }
    }
    ctx->pc = 0x386CE4u;
    // 0x386ce4: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x386ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
    // 0x386ce8: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x386ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x386cec: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x386cecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
    // 0x386cf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x386cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_386cf4:
    // 0x386cf4: 0xae420834  sw          $v0, 0x834($s2)
    ctx->pc = 0x386cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2100), GPR_U32(ctx, 2));
    // 0x386cf8: 0xdfbf01a0  ld          $ra, 0x1A0($sp)
    ctx->pc = 0x386cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
label_386cfc:
    // 0x386cfc: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x386cfcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_386d00:
    // 0x386d00: 0xdfb70180  ld          $s7, 0x180($sp)
    ctx->pc = 0x386d00u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x386d04: 0xdfb60170  ld          $s6, 0x170($sp)
    ctx->pc = 0x386d04u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x386d08: 0xdfb50160  ld          $s5, 0x160($sp)
    ctx->pc = 0x386d08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x386d0c: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x386d0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x386d10: 0xdfb30140  ld          $s3, 0x140($sp)
    ctx->pc = 0x386d10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x386d14: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x386d14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x386d18: 0xdfb10120  ld          $s1, 0x120($sp)
    ctx->pc = 0x386d18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x386d1c: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x386d1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x386d20: 0x3e00008  jr          $ra
    ctx->pc = 0x386D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386D20u;
        // 0x386d24: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x386D28u;
}
