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

// Function: sub_0020F900
// Address: 0x20f900 - 0x20fd78
void sub_0020F900_0x20f900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F900_0x20f900");
#endif

    switch (ctx->pc) {
        case 0x20f900u: goto label_20f900;
        case 0x20f904u: goto label_20f904;
        case 0x20f908u: goto label_20f908;
        case 0x20f90cu: goto label_20f90c;
        case 0x20f910u: goto label_20f910;
        case 0x20f914u: goto label_20f914;
        case 0x20f918u: goto label_20f918;
        case 0x20f91cu: goto label_20f91c;
        case 0x20f920u: goto label_20f920;
        case 0x20f924u: goto label_20f924;
        case 0x20f928u: goto label_20f928;
        case 0x20f92cu: goto label_20f92c;
        case 0x20f930u: goto label_20f930;
        case 0x20f934u: goto label_20f934;
        case 0x20f938u: goto label_20f938;
        case 0x20f93cu: goto label_20f93c;
        case 0x20f940u: goto label_20f940;
        case 0x20f944u: goto label_20f944;
        case 0x20f948u: goto label_20f948;
        case 0x20f94cu: goto label_20f94c;
        case 0x20f950u: goto label_20f950;
        case 0x20f954u: goto label_20f954;
        case 0x20f958u: goto label_20f958;
        case 0x20f95cu: goto label_20f95c;
        case 0x20f960u: goto label_20f960;
        case 0x20f964u: goto label_20f964;
        case 0x20f968u: goto label_20f968;
        case 0x20f96cu: goto label_20f96c;
        case 0x20f970u: goto label_20f970;
        case 0x20f974u: goto label_20f974;
        case 0x20f978u: goto label_20f978;
        case 0x20f97cu: goto label_20f97c;
        case 0x20f980u: goto label_20f980;
        case 0x20f984u: goto label_20f984;
        case 0x20f988u: goto label_20f988;
        case 0x20f98cu: goto label_20f98c;
        case 0x20f990u: goto label_20f990;
        case 0x20f994u: goto label_20f994;
        case 0x20f998u: goto label_20f998;
        case 0x20f99cu: goto label_20f99c;
        case 0x20f9a0u: goto label_20f9a0;
        case 0x20f9a4u: goto label_20f9a4;
        case 0x20f9a8u: goto label_20f9a8;
        case 0x20f9acu: goto label_20f9ac;
        case 0x20f9b0u: goto label_20f9b0;
        case 0x20f9b4u: goto label_20f9b4;
        case 0x20f9b8u: goto label_20f9b8;
        case 0x20f9bcu: goto label_20f9bc;
        case 0x20f9c0u: goto label_20f9c0;
        case 0x20f9c4u: goto label_20f9c4;
        case 0x20f9c8u: goto label_20f9c8;
        case 0x20f9ccu: goto label_20f9cc;
        case 0x20f9d0u: goto label_20f9d0;
        case 0x20f9d4u: goto label_20f9d4;
        case 0x20f9d8u: goto label_20f9d8;
        case 0x20f9dcu: goto label_20f9dc;
        case 0x20f9e0u: goto label_20f9e0;
        case 0x20f9e4u: goto label_20f9e4;
        case 0x20f9e8u: goto label_20f9e8;
        case 0x20f9ecu: goto label_20f9ec;
        case 0x20f9f0u: goto label_20f9f0;
        case 0x20f9f4u: goto label_20f9f4;
        case 0x20f9f8u: goto label_20f9f8;
        case 0x20f9fcu: goto label_20f9fc;
        case 0x20fa00u: goto label_20fa00;
        case 0x20fa04u: goto label_20fa04;
        case 0x20fa08u: goto label_20fa08;
        case 0x20fa0cu: goto label_20fa0c;
        case 0x20fa10u: goto label_20fa10;
        case 0x20fa14u: goto label_20fa14;
        case 0x20fa18u: goto label_20fa18;
        case 0x20fa1cu: goto label_20fa1c;
        case 0x20fa20u: goto label_20fa20;
        case 0x20fa24u: goto label_20fa24;
        case 0x20fa28u: goto label_20fa28;
        case 0x20fa2cu: goto label_20fa2c;
        case 0x20fa30u: goto label_20fa30;
        case 0x20fa34u: goto label_20fa34;
        case 0x20fa38u: goto label_20fa38;
        case 0x20fa3cu: goto label_20fa3c;
        case 0x20fa40u: goto label_20fa40;
        case 0x20fa44u: goto label_20fa44;
        case 0x20fa48u: goto label_20fa48;
        case 0x20fa4cu: goto label_20fa4c;
        case 0x20fa50u: goto label_20fa50;
        case 0x20fa54u: goto label_20fa54;
        case 0x20fa58u: goto label_20fa58;
        case 0x20fa5cu: goto label_20fa5c;
        case 0x20fa60u: goto label_20fa60;
        case 0x20fa64u: goto label_20fa64;
        case 0x20fa68u: goto label_20fa68;
        case 0x20fa6cu: goto label_20fa6c;
        case 0x20fa70u: goto label_20fa70;
        case 0x20fa74u: goto label_20fa74;
        case 0x20fa78u: goto label_20fa78;
        case 0x20fa7cu: goto label_20fa7c;
        case 0x20fa80u: goto label_20fa80;
        case 0x20fa84u: goto label_20fa84;
        case 0x20fa88u: goto label_20fa88;
        case 0x20fa8cu: goto label_20fa8c;
        case 0x20fa90u: goto label_20fa90;
        case 0x20fa94u: goto label_20fa94;
        case 0x20fa98u: goto label_20fa98;
        case 0x20fa9cu: goto label_20fa9c;
        case 0x20faa0u: goto label_20faa0;
        case 0x20faa4u: goto label_20faa4;
        case 0x20faa8u: goto label_20faa8;
        case 0x20faacu: goto label_20faac;
        case 0x20fab0u: goto label_20fab0;
        case 0x20fab4u: goto label_20fab4;
        case 0x20fab8u: goto label_20fab8;
        case 0x20fabcu: goto label_20fabc;
        case 0x20fac0u: goto label_20fac0;
        case 0x20fac4u: goto label_20fac4;
        case 0x20fac8u: goto label_20fac8;
        case 0x20faccu: goto label_20facc;
        case 0x20fad0u: goto label_20fad0;
        case 0x20fad4u: goto label_20fad4;
        case 0x20fad8u: goto label_20fad8;
        case 0x20fadcu: goto label_20fadc;
        case 0x20fae0u: goto label_20fae0;
        case 0x20fae4u: goto label_20fae4;
        case 0x20fae8u: goto label_20fae8;
        case 0x20faecu: goto label_20faec;
        case 0x20faf0u: goto label_20faf0;
        case 0x20faf4u: goto label_20faf4;
        case 0x20faf8u: goto label_20faf8;
        case 0x20fafcu: goto label_20fafc;
        case 0x20fb00u: goto label_20fb00;
        case 0x20fb04u: goto label_20fb04;
        case 0x20fb08u: goto label_20fb08;
        case 0x20fb0cu: goto label_20fb0c;
        case 0x20fb10u: goto label_20fb10;
        case 0x20fb14u: goto label_20fb14;
        case 0x20fb18u: goto label_20fb18;
        case 0x20fb1cu: goto label_20fb1c;
        case 0x20fb20u: goto label_20fb20;
        case 0x20fb24u: goto label_20fb24;
        case 0x20fb28u: goto label_20fb28;
        case 0x20fb2cu: goto label_20fb2c;
        case 0x20fb30u: goto label_20fb30;
        case 0x20fb34u: goto label_20fb34;
        case 0x20fb38u: goto label_20fb38;
        case 0x20fb3cu: goto label_20fb3c;
        case 0x20fb40u: goto label_20fb40;
        case 0x20fb44u: goto label_20fb44;
        case 0x20fb48u: goto label_20fb48;
        case 0x20fb4cu: goto label_20fb4c;
        case 0x20fb50u: goto label_20fb50;
        case 0x20fb54u: goto label_20fb54;
        case 0x20fb58u: goto label_20fb58;
        case 0x20fb5cu: goto label_20fb5c;
        case 0x20fb60u: goto label_20fb60;
        case 0x20fb64u: goto label_20fb64;
        case 0x20fb68u: goto label_20fb68;
        case 0x20fb6cu: goto label_20fb6c;
        case 0x20fb70u: goto label_20fb70;
        case 0x20fb74u: goto label_20fb74;
        case 0x20fb78u: goto label_20fb78;
        case 0x20fb7cu: goto label_20fb7c;
        case 0x20fb80u: goto label_20fb80;
        case 0x20fb84u: goto label_20fb84;
        case 0x20fb88u: goto label_20fb88;
        case 0x20fb8cu: goto label_20fb8c;
        case 0x20fb90u: goto label_20fb90;
        case 0x20fb94u: goto label_20fb94;
        case 0x20fb98u: goto label_20fb98;
        case 0x20fb9cu: goto label_20fb9c;
        case 0x20fba0u: goto label_20fba0;
        case 0x20fba4u: goto label_20fba4;
        case 0x20fba8u: goto label_20fba8;
        case 0x20fbacu: goto label_20fbac;
        case 0x20fbb0u: goto label_20fbb0;
        case 0x20fbb4u: goto label_20fbb4;
        case 0x20fbb8u: goto label_20fbb8;
        case 0x20fbbcu: goto label_20fbbc;
        case 0x20fbc0u: goto label_20fbc0;
        case 0x20fbc4u: goto label_20fbc4;
        case 0x20fbc8u: goto label_20fbc8;
        case 0x20fbccu: goto label_20fbcc;
        case 0x20fbd0u: goto label_20fbd0;
        case 0x20fbd4u: goto label_20fbd4;
        case 0x20fbd8u: goto label_20fbd8;
        case 0x20fbdcu: goto label_20fbdc;
        case 0x20fbe0u: goto label_20fbe0;
        case 0x20fbe4u: goto label_20fbe4;
        case 0x20fbe8u: goto label_20fbe8;
        case 0x20fbecu: goto label_20fbec;
        case 0x20fbf0u: goto label_20fbf0;
        case 0x20fbf4u: goto label_20fbf4;
        case 0x20fbf8u: goto label_20fbf8;
        case 0x20fbfcu: goto label_20fbfc;
        case 0x20fc00u: goto label_20fc00;
        case 0x20fc04u: goto label_20fc04;
        case 0x20fc08u: goto label_20fc08;
        case 0x20fc0cu: goto label_20fc0c;
        case 0x20fc10u: goto label_20fc10;
        case 0x20fc14u: goto label_20fc14;
        case 0x20fc18u: goto label_20fc18;
        case 0x20fc1cu: goto label_20fc1c;
        case 0x20fc20u: goto label_20fc20;
        case 0x20fc24u: goto label_20fc24;
        case 0x20fc28u: goto label_20fc28;
        case 0x20fc2cu: goto label_20fc2c;
        case 0x20fc30u: goto label_20fc30;
        case 0x20fc34u: goto label_20fc34;
        case 0x20fc38u: goto label_20fc38;
        case 0x20fc3cu: goto label_20fc3c;
        case 0x20fc40u: goto label_20fc40;
        case 0x20fc44u: goto label_20fc44;
        case 0x20fc48u: goto label_20fc48;
        case 0x20fc4cu: goto label_20fc4c;
        case 0x20fc50u: goto label_20fc50;
        case 0x20fc54u: goto label_20fc54;
        case 0x20fc58u: goto label_20fc58;
        case 0x20fc5cu: goto label_20fc5c;
        case 0x20fc60u: goto label_20fc60;
        case 0x20fc64u: goto label_20fc64;
        case 0x20fc68u: goto label_20fc68;
        case 0x20fc6cu: goto label_20fc6c;
        case 0x20fc70u: goto label_20fc70;
        case 0x20fc74u: goto label_20fc74;
        case 0x20fc78u: goto label_20fc78;
        case 0x20fc7cu: goto label_20fc7c;
        case 0x20fc80u: goto label_20fc80;
        case 0x20fc84u: goto label_20fc84;
        case 0x20fc88u: goto label_20fc88;
        case 0x20fc8cu: goto label_20fc8c;
        case 0x20fc90u: goto label_20fc90;
        case 0x20fc94u: goto label_20fc94;
        case 0x20fc98u: goto label_20fc98;
        case 0x20fc9cu: goto label_20fc9c;
        case 0x20fca0u: goto label_20fca0;
        case 0x20fca4u: goto label_20fca4;
        case 0x20fca8u: goto label_20fca8;
        case 0x20fcacu: goto label_20fcac;
        case 0x20fcb0u: goto label_20fcb0;
        case 0x20fcb4u: goto label_20fcb4;
        case 0x20fcb8u: goto label_20fcb8;
        case 0x20fcbcu: goto label_20fcbc;
        case 0x20fcc0u: goto label_20fcc0;
        case 0x20fcc4u: goto label_20fcc4;
        case 0x20fcc8u: goto label_20fcc8;
        case 0x20fcccu: goto label_20fccc;
        case 0x20fcd0u: goto label_20fcd0;
        case 0x20fcd4u: goto label_20fcd4;
        case 0x20fcd8u: goto label_20fcd8;
        case 0x20fcdcu: goto label_20fcdc;
        case 0x20fce0u: goto label_20fce0;
        case 0x20fce4u: goto label_20fce4;
        case 0x20fce8u: goto label_20fce8;
        case 0x20fcecu: goto label_20fcec;
        case 0x20fcf0u: goto label_20fcf0;
        case 0x20fcf4u: goto label_20fcf4;
        case 0x20fcf8u: goto label_20fcf8;
        case 0x20fcfcu: goto label_20fcfc;
        case 0x20fd00u: goto label_20fd00;
        case 0x20fd04u: goto label_20fd04;
        case 0x20fd08u: goto label_20fd08;
        case 0x20fd0cu: goto label_20fd0c;
        case 0x20fd10u: goto label_20fd10;
        case 0x20fd14u: goto label_20fd14;
        case 0x20fd18u: goto label_20fd18;
        case 0x20fd1cu: goto label_20fd1c;
        case 0x20fd20u: goto label_20fd20;
        case 0x20fd24u: goto label_20fd24;
        case 0x20fd28u: goto label_20fd28;
        case 0x20fd2cu: goto label_20fd2c;
        case 0x20fd30u: goto label_20fd30;
        case 0x20fd34u: goto label_20fd34;
        case 0x20fd38u: goto label_20fd38;
        case 0x20fd3cu: goto label_20fd3c;
        case 0x20fd40u: goto label_20fd40;
        case 0x20fd44u: goto label_20fd44;
        case 0x20fd48u: goto label_20fd48;
        case 0x20fd4cu: goto label_20fd4c;
        case 0x20fd50u: goto label_20fd50;
        case 0x20fd54u: goto label_20fd54;
        case 0x20fd58u: goto label_20fd58;
        case 0x20fd5cu: goto label_20fd5c;
        case 0x20fd60u: goto label_20fd60;
        case 0x20fd64u: goto label_20fd64;
        case 0x20fd68u: goto label_20fd68;
        case 0x20fd6cu: goto label_20fd6c;
        case 0x20fd70u: goto label_20fd70;
        case 0x20fd74u: goto label_20fd74;
        default: break;
    }

    ctx->pc = 0x20f900u;

label_20f900:
    // 0x20f900: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20f900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_20f904:
    // 0x20f904: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20f904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20f908:
    // 0x20f908: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20f908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_20f90c:
    // 0x20f90c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20f90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_20f910:
    // 0x20f910: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20f910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20f914:
    // 0x20f914: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x20f914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_20f918:
    // 0x20f918: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20f918u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20f91c:
    // 0x20f91c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20f91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_20f920:
    // 0x20f920: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x20f920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_20f924:
    // 0x20f924: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x20f924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_20f928:
    // 0x20f928: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x20f928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_20f92c:
    // 0x20f92c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x20f92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_20f930:
    // 0x20f930: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x20f930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_20f934:
    // 0x20f934: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x20f934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_20f938:
    // 0x20f938: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x20f938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_20f93c:
    // 0x20f93c: 0x8e46010c  lw          $a2, 0x10C($s2)
    ctx->pc = 0x20f93cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_20f940:
    // 0x20f940: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x20f940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_20f944:
    // 0x20f944: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x20f944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_20f948:
    // 0x20f948: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20f948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20f94c:
    // 0x20f94c: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_20f950:
    if (ctx->pc == 0x20F950u) {
        ctx->pc = 0x20F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F94Cu;
        // 0x20f950: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F954u;
        goto label_20f954;
    }
    ctx->pc = 0x20F94Cu;
    {
        const bool branch_taken_0x20f94c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F94Cu;
        // 0x20f950: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f94c) {
            ctx->pc = 0x20F96Cu;
            goto label_20f96c;
        }
    }
    ctx->pc = 0x20F954u;
label_20f954:
    // 0x20f954: 0xc0b8530  jal         func_2E14C0
label_20f958:
    if (ctx->pc == 0x20F958u) {
        ctx->pc = 0x20F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F954u;
        // 0x20f958: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F95Cu;
        goto label_20f95c;
    }
    ctx->pc = 0x20F954u;
    SET_GPR_U32(ctx, 31, 0x20F95Cu);
    ctx->pc = 0x20F958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F954u;
    // 0x20f958: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E14C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E14C0u, 0x20F954u, 0x20F95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F95Cu;
label_20f95c:
    // 0x20f95c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_20f960:
    if (ctx->pc == 0x20F960u) {
        ctx->pc = 0x20F960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F95Cu;
        // 0x20f960: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F964u;
        goto label_20f964;
    }
    ctx->pc = 0x20F95Cu;
    {
        const bool branch_taken_0x20f95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F95Cu;
        // 0x20f960: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f95c) {
            ctx->pc = 0x20F96Cu;
            goto label_20f96c;
        }
    }
    ctx->pc = 0x20F964u;
label_20f964:
    // 0x20f964: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20f964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20f968:
    // 0x20f968: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x20f968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_20f96c:
    // 0x20f96c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x20f96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20f970:
    // 0x20f970: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_20f974:
    if (ctx->pc == 0x20F974u) {
        ctx->pc = 0x20F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F970u;
        // 0x20f974: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F978u;
        goto label_20f978;
    }
    ctx->pc = 0x20F970u;
    {
        const bool branch_taken_0x20f970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F970u;
        // 0x20f974: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f970) {
            ctx->pc = 0x20F988u;
            goto label_20f988;
        }
    }
    ctx->pc = 0x20F978u;
label_20f978:
    // 0x20f978: 0xc076430  jal         func_1D90C0
label_20f97c:
    if (ctx->pc == 0x20F97Cu) {
        ctx->pc = 0x20F980u;
        goto label_20f980;
    }
    ctx->pc = 0x20F978u;
    SET_GPR_U32(ctx, 31, 0x20F980u);
    ctx->pc = 0x1D90C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D90C0u, 0x20F978u, 0x20F980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F980u;
label_20f980:
    // 0x20f980: 0x104000e3  beqz        $v0, . + 4 + (0xE3 << 2)
label_20f984:
    if (ctx->pc == 0x20F984u) {
        ctx->pc = 0x20F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F980u;
        // 0x20f984: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F988u;
        goto label_20f988;
    }
    ctx->pc = 0x20F980u;
    {
        const bool branch_taken_0x20f980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F980u;
        // 0x20f984: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f980) {
            ctx->pc = 0x20FD10u;
            goto label_20fd10;
        }
    }
    ctx->pc = 0x20F988u;
label_20f988:
    // 0x20f988: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
label_20f98c:
    if (ctx->pc == 0x20F98Cu) {
        ctx->pc = 0x20F990u;
        goto label_20f990;
    }
    ctx->pc = 0x20F988u;
    {
        const bool branch_taken_0x20f988 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x20f988) {
            ctx->pc = 0x20F9A4u;
            goto label_20f9a4;
        }
    }
    ctx->pc = 0x20F990u;
label_20f990:
    // 0x20f990: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x20f990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_20f994:
    // 0x20f994: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x20f994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_20f998:
    // 0x20f998: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x20f998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_20f99c:
    // 0x20f99c: 0x40f809  jalr        $v0
label_20f9a0:
    if (ctx->pc == 0x20F9A0u) {
        ctx->pc = 0x20F9A4u;
        goto label_20f9a4;
    }
    ctx->pc = 0x20F99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F9A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F99Cu, 0x20F9A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F9A4u;
label_20f9a4:
    // 0x20f9a4: 0xc0797fe  jal         func_1E5FF8
label_20f9a8:
    if (ctx->pc == 0x20F9A8u) {
        ctx->pc = 0x20F9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F9A4u;
        // 0x20f9a8: 0x3c150040  lui         $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F9ACu;
        goto label_20f9ac;
    }
    ctx->pc = 0x20F9A4u;
    SET_GPR_U32(ctx, 31, 0x20F9ACu);
    ctx->pc = 0x20F9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F9A4u;
    // 0x20f9a8: 0x3c150040  lui         $s5, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5FF8u, 0x20F9A4u, 0x20F9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F9ACu;
label_20f9ac:
    // 0x20f9ac: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_20f9b0:
    if (ctx->pc == 0x20F9B0u) {
        ctx->pc = 0x20F9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F9ACu;
        // 0x20f9b0: 0x27b30004  addiu       $s3, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F9B4u;
        goto label_20f9b4;
    }
    ctx->pc = 0x20F9ACu;
    {
        const bool branch_taken_0x20f9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F9ACu;
        // 0x20f9b0: 0x27b30004  addiu       $s3, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f9ac) {
            ctx->pc = 0x20FA68u;
            goto label_20fa68;
        }
    }
    ctx->pc = 0x20F9B4u;
label_20f9b4:
    // 0x20f9b4: 0x10000027  b           . + 4 + (0x27 << 2)
label_20f9b8:
    if (ctx->pc == 0x20F9B8u) {
        ctx->pc = 0x20F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F9B4u;
        // 0x20f9b8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F9BCu;
        goto label_20f9bc;
    }
    ctx->pc = 0x20F9B4u;
    {
        const bool branch_taken_0x20f9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F9B4u;
        // 0x20f9b8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f9b4) {
            ctx->pc = 0x20FA54u;
            goto label_20fa54;
        }
    }
    ctx->pc = 0x20F9BCu;
label_20f9bc:
    // 0x20f9bc: 0x0  nop
    ctx->pc = 0x20f9bcu;
    // NOP
label_20f9c0:
    // 0x20f9c0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x20f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_20f9c4:
    // 0x20f9c4: 0x8c6591dc  lw          $a1, -0x6E24($v1)
    ctx->pc = 0x20f9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939100)));
label_20f9c8:
    // 0x20f9c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20f9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20f9cc:
    // 0x20f9cc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20f9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20f9d0:
    // 0x20f9d0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x20f9d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20f9d4:
    // 0x20f9d4: 0xc083c52  jal         func_20F148
label_20f9d8:
    if (ctx->pc == 0x20F9D8u) {
        ctx->pc = 0x20F9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F9D4u;
        // 0x20f9d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F9DCu;
        goto label_20f9dc;
    }
    ctx->pc = 0x20F9D4u;
    SET_GPR_U32(ctx, 31, 0x20F9DCu);
    ctx->pc = 0x20F9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F9D4u;
    // 0x20f9d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F148u, 0x20F9D4u, 0x20F9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F9DCu;
label_20f9dc:
    // 0x20f9dc: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x20f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_20f9e0:
    // 0x20f9e0: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x20f9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
label_20f9e4:
    // 0x20f9e4: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_20f9e8:
    if (ctx->pc == 0x20F9E8u) {
        ctx->pc = 0x20F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F9E4u;
        // 0x20f9e8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F9ECu;
        goto label_20f9ec;
    }
    ctx->pc = 0x20F9E4u;
    {
        const bool branch_taken_0x20f9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f9e4) {
            ctx->pc = 0x20F9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F9E4u;
            // 0x20f9e8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20FA54u;
            goto label_20fa54;
        }
    }
    ctx->pc = 0x20F9ECu;
label_20f9ec:
    // 0x20f9ec: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x20f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_20f9f0:
    // 0x20f9f0: 0x38440008  xori        $a0, $v0, 0x8
    ctx->pc = 0x20f9f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_20f9f4:
    // 0x20f9f4: 0x5480000d  bnel        $a0, $zero, . + 4 + (0xD << 2)
label_20f9f8:
    if (ctx->pc == 0x20F9F8u) {
        ctx->pc = 0x20F9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F9F4u;
        // 0x20f9f8: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F9FCu;
        goto label_20f9fc;
    }
    ctx->pc = 0x20F9F4u;
    {
        const bool branch_taken_0x20f9f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f9f4) {
            ctx->pc = 0x20F9F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F9F4u;
            // 0x20f9f8: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20FA2Cu;
            goto label_20fa2c;
        }
    }
    ctx->pc = 0x20F9FCu;
label_20f9fc:
    // 0x20f9fc: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x20f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_20fa00:
    // 0x20fa00: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x20fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_20fa04:
    // 0x20fa04: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_20fa08:
    if (ctx->pc == 0x20FA08u) {
        ctx->pc = 0x20FA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA04u;
        // 0x20fa08: 0x4100b  movn        $v0, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FA0Cu;
        goto label_20fa0c;
    }
    ctx->pc = 0x20FA04u;
    {
        const bool branch_taken_0x20fa04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA04u;
        // 0x20fa08: 0x4100b  movn        $v0, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fa04) {
            ctx->pc = 0x20FA28u;
            goto label_20fa28;
        }
    }
    ctx->pc = 0x20FA0Cu;
label_20fa0c:
    // 0x20fa0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20fa0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20fa10:
    // 0x20fa10: 0x8c82010c  lw          $v0, 0x10C($a0)
    ctx->pc = 0x20fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
label_20fa14:
    // 0x20fa14: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x20fa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_20fa18:
    // 0x20fa18: 0x8c640054  lw          $a0, 0x54($v1)
    ctx->pc = 0x20fa18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_20fa1c:
    // 0x20fa1c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_20fa20:
    if (ctx->pc == 0x20FA20u) {
        ctx->pc = 0x20FA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA1Cu;
        // 0x20fa20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FA24u;
        goto label_20fa24;
    }
    ctx->pc = 0x20FA1Cu;
    {
        const bool branch_taken_0x20fa1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA1Cu;
        // 0x20fa20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fa1c) {
            ctx->pc = 0x20FA28u;
            goto label_20fa28;
        }
    }
    ctx->pc = 0x20FA24u;
label_20fa24:
    // 0x20fa24: 0xae05003c  sw          $a1, 0x3C($s0)
    ctx->pc = 0x20fa24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 5));
label_20fa28:
    // 0x20fa28: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x20fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_20fa2c:
    // 0x20fa2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_20fa30:
    if (ctx->pc == 0x20FA30u) {
        ctx->pc = 0x20FA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA2Cu;
        // 0x20fa30: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FA34u;
        goto label_20fa34;
    }
    ctx->pc = 0x20FA2Cu;
    {
        const bool branch_taken_0x20fa2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA2Cu;
        // 0x20fa30: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fa2c) {
            ctx->pc = 0x20FA44u;
            goto label_20fa44;
        }
    }
    ctx->pc = 0x20FA34u;
label_20fa34:
    // 0x20fa34: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x20fa34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_20fa38:
    // 0x20fa38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20fa3c:
    // 0x20fa3c: 0x10000004  b           . + 4 + (0x4 << 2)
label_20fa40:
    if (ctx->pc == 0x20FA40u) {
        ctx->pc = 0x20FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA3Cu;
        // 0x20fa40: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FA44u;
        goto label_20fa44;
    }
    ctx->pc = 0x20FA3Cu;
    {
        const bool branch_taken_0x20fa3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA3Cu;
        // 0x20fa40: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fa3c) {
            ctx->pc = 0x20FA50u;
            goto label_20fa50;
        }
    }
    ctx->pc = 0x20FA44u;
label_20fa44:
    // 0x20fa44: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x20fa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_20fa48:
    // 0x20fa48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20fa4c:
    // 0x20fa4c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x20fa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_20fa50:
    // 0x20fa50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20fa50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_20fa54:
    // 0x20fa54: 0xc0796ac  jal         func_1E5AB0
label_20fa58:
    if (ctx->pc == 0x20FA58u) {
        ctx->pc = 0x20FA5Cu;
        goto label_20fa5c;
    }
    ctx->pc = 0x20FA54u;
    SET_GPR_U32(ctx, 31, 0x20FA5Cu);
    ctx->pc = 0x1E5AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5AB0u, 0x20FA54u, 0x20FA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FA5Cu;
label_20fa5c:
    // 0x20fa5c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x20fa5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20fa60:
    // 0x20fa60: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
label_20fa64:
    if (ctx->pc == 0x20FA64u) {
        ctx->pc = 0x20FA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA60u;
        // 0x20fa64: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FA68u;
        goto label_20fa68;
    }
    ctx->pc = 0x20FA60u;
    {
        const bool branch_taken_0x20fa60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA60u;
        // 0x20fa64: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fa60) {
            ctx->pc = 0x20F9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f9c0;
        }
    }
    ctx->pc = 0x20FA68u;
label_20fa68:
    // 0x20fa68: 0xc079582  jal         func_1E5608
label_20fa6c:
    if (ctx->pc == 0x20FA6Cu) {
        ctx->pc = 0x20FA70u;
        goto label_20fa70;
    }
    ctx->pc = 0x20FA68u;
    SET_GPR_U32(ctx, 31, 0x20FA70u);
    ctx->pc = 0x1E5608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5608u, 0x20FA68u, 0x20FA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FA70u;
label_20fa70:
    // 0x20fa70: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_20fa74:
    if (ctx->pc == 0x20FA74u) {
        ctx->pc = 0x20FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA70u;
        // 0x20fa74: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FA78u;
        goto label_20fa78;
    }
    ctx->pc = 0x20FA70u;
    {
        const bool branch_taken_0x20fa70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA70u;
        // 0x20fa74: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fa70) {
            ctx->pc = 0x20FB2Cu;
            goto label_20fb2c;
        }
    }
    ctx->pc = 0x20FA78u;
label_20fa78:
    // 0x20fa78: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20fa78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20fa7c:
    // 0x20fa7c: 0x8c6291d8  lw          $v0, -0x6E28($v1)
    ctx->pc = 0x20fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939096)));
label_20fa80:
    // 0x20fa80: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_20fa84:
    if (ctx->pc == 0x20FA84u) {
        ctx->pc = 0x20FA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA80u;
        // 0x20fa84: 0x60f02d  daddu       $fp, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FA88u;
        goto label_20fa88;
    }
    ctx->pc = 0x20FA80u;
    {
        const bool branch_taken_0x20fa80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA80u;
        // 0x20fa84: 0x60f02d  daddu       $fp, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fa80) {
            ctx->pc = 0x20FB2Cu;
            goto label_20fb2c;
        }
    }
    ctx->pc = 0x20FA88u;
label_20fa88:
    // 0x20fa88: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x20fa88u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
label_20fa8c:
    // 0x20fa8c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x20fa8cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20fa90:
    // 0x20fa90: 0x8ee391d4  lw          $v1, -0x6E2C($s7)
    ctx->pc = 0x20fa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294939092)));
label_20fa94:
    // 0x20fa94: 0x0  nop
    ctx->pc = 0x20fa94u;
    // NOP
label_20fa98:
    // 0x20fa98: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x20fa98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_20fa9c:
    // 0x20fa9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20fa9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20faa0:
    // 0x20faa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20faa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20faa4:
    // 0x20faa4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x20faa4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20faa8:
    // 0x20faa8: 0xc083c52  jal         func_20F148
label_20faac:
    if (ctx->pc == 0x20FAACu) {
        ctx->pc = 0x20FAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAA8u;
        // 0x20faac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FAB0u;
        goto label_20fab0;
    }
    ctx->pc = 0x20FAA8u;
    SET_GPR_U32(ctx, 31, 0x20FAB0u);
    ctx->pc = 0x20FAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FAA8u;
    // 0x20faac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F148u, 0x20FAA8u, 0x20FAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FAB0u;
label_20fab0:
    // 0x20fab0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x20fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_20fab4:
    // 0x20fab4: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x20fab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
label_20fab8:
    // 0x20fab8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_20fabc:
    if (ctx->pc == 0x20FABCu) {
        ctx->pc = 0x20FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAB8u;
        // 0x20fabc: 0x8fc291d8  lw          $v0, -0x6E28($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294939096)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FAC0u;
        goto label_20fac0;
    }
    ctx->pc = 0x20FAB8u;
    {
        const bool branch_taken_0x20fab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAB8u;
        // 0x20fabc: 0x8fc291d8  lw          $v0, -0x6E28($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294939096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fab8) {
            ctx->pc = 0x20FB1Cu;
            goto label_20fb1c;
        }
    }
    ctx->pc = 0x20FAC0u;
label_20fac0:
    // 0x20fac0: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x20fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_20fac4:
    // 0x20fac4: 0x38440008  xori        $a0, $v0, 0x8
    ctx->pc = 0x20fac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_20fac8:
    // 0x20fac8: 0x5480000b  bnel        $a0, $zero, . + 4 + (0xB << 2)
label_20facc:
    if (ctx->pc == 0x20FACCu) {
        ctx->pc = 0x20FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAC8u;
        // 0x20facc: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FAD0u;
        goto label_20fad0;
    }
    ctx->pc = 0x20FAC8u;
    {
        const bool branch_taken_0x20fac8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fac8) {
            ctx->pc = 0x20FACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20FAC8u;
            // 0x20facc: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20FAF8u;
            goto label_20faf8;
        }
    }
    ctx->pc = 0x20FAD0u;
label_20fad0:
    // 0x20fad0: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x20fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_20fad4:
    // 0x20fad4: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x20fad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_20fad8:
    // 0x20fad8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_20fadc:
    if (ctx->pc == 0x20FADCu) {
        ctx->pc = 0x20FADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAD8u;
        // 0x20fadc: 0x4100b  movn        $v0, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FAE0u;
        goto label_20fae0;
    }
    ctx->pc = 0x20FAD8u;
    {
        const bool branch_taken_0x20fad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAD8u;
        // 0x20fadc: 0x4100b  movn        $v0, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fad8) {
            ctx->pc = 0x20FAF4u;
            goto label_20faf4;
        }
    }
    ctx->pc = 0x20FAE0u;
label_20fae0:
    // 0x20fae0: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x20fae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_20fae4:
    // 0x20fae4: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x20fae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_20fae8:
    // 0x20fae8: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x20fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_20faec:
    // 0x20faec: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_20faf0:
    if (ctx->pc == 0x20FAF0u) {
        ctx->pc = 0x20FAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAECu;
        // 0x20faf0: 0xae16003c  sw          $s6, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FAF4u;
        goto label_20faf4;
    }
    ctx->pc = 0x20FAECu;
    {
        const bool branch_taken_0x20faec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20faec) {
            ctx->pc = 0x20FAF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20FAECu;
            // 0x20faf0: 0xae16003c  sw          $s6, 0x3C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20FAF4u;
            goto label_20faf4;
        }
    }
    ctx->pc = 0x20FAF4u;
label_20faf4:
    // 0x20faf4: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x20faf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_20faf8:
    // 0x20faf8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_20fafc:
    if (ctx->pc == 0x20FAFCu) {
        ctx->pc = 0x20FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAF8u;
        // 0x20fafc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB00u;
        goto label_20fb00;
    }
    ctx->pc = 0x20FAF8u;
    {
        const bool branch_taken_0x20faf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAF8u;
        // 0x20fafc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20faf8) {
            ctx->pc = 0x20FB0Cu;
            goto label_20fb0c;
        }
    }
    ctx->pc = 0x20FB00u;
label_20fb00:
    // 0x20fb00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20fb04:
    // 0x20fb04: 0x10000004  b           . + 4 + (0x4 << 2)
label_20fb08:
    if (ctx->pc == 0x20FB08u) {
        ctx->pc = 0x20FB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB04u;
        // 0x20fb08: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB0Cu;
        goto label_20fb0c;
    }
    ctx->pc = 0x20FB04u;
    {
        const bool branch_taken_0x20fb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB04u;
        // 0x20fb08: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb04) {
            ctx->pc = 0x20FB18u;
            goto label_20fb18;
        }
    }
    ctx->pc = 0x20FB0Cu;
label_20fb0c:
    // 0x20fb0c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x20fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_20fb10:
    // 0x20fb10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20fb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20fb14:
    // 0x20fb14: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x20fb14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_20fb18:
    // 0x20fb18: 0x8fc291d8  lw          $v0, -0x6E28($fp)
    ctx->pc = 0x20fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294939096)));
label_20fb1c:
    // 0x20fb1c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20fb1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_20fb20:
    // 0x20fb20: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x20fb20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20fb24:
    // 0x20fb24: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_20fb28:
    if (ctx->pc == 0x20FB28u) {
        ctx->pc = 0x20FB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB24u;
        // 0x20fb28: 0x8ee391d4  lw          $v1, -0x6E2C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294939092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB2Cu;
        goto label_20fb2c;
    }
    ctx->pc = 0x20FB24u;
    {
        const bool branch_taken_0x20fb24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB24u;
        // 0x20fb28: 0x8ee391d4  lw          $v1, -0x6E2C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294939092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb24) {
            ctx->pc = 0x20FA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fa98;
        }
    }
    ctx->pc = 0x20FB2Cu;
label_20fb2c:
    // 0x20fb2c: 0x8ea391f0  lw          $v1, -0x6E10($s5)
    ctx->pc = 0x20fb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294939120)));
label_20fb30:
    // 0x20fb30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20fb34:
    // 0x20fb34: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_20fb38:
    if (ctx->pc == 0x20FB38u) {
        ctx->pc = 0x20FB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB34u;
        // 0x20fb38: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB3Cu;
        goto label_20fb3c;
    }
    ctx->pc = 0x20FB34u;
    {
        const bool branch_taken_0x20fb34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20fb34) {
            ctx->pc = 0x20FB38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20FB34u;
            // 0x20fb38: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20FB54u;
            goto label_20fb54;
        }
    }
    ctx->pc = 0x20FB3Cu;
label_20fb3c:
    // 0x20fb3c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x20fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_20fb40:
    // 0x20fb40: 0x8c4391ec  lw          $v1, -0x6E14($v0)
    ctx->pc = 0x20fb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939116)));
label_20fb44:
    // 0x20fb44: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20fb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20fb48:
    // 0x20fb48: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x20fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_20fb4c:
    // 0x20fb4c: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x20fb4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
label_20fb50:
    // 0x20fb50: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x20fb50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20fb54:
    // 0x20fb54: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_20fb58:
    if (ctx->pc == 0x20FB58u) {
        ctx->pc = 0x20FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB54u;
        // 0x20fb58: 0x8ea291f0  lw          $v0, -0x6E10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294939120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB5Cu;
        goto label_20fb5c;
    }
    ctx->pc = 0x20FB54u;
    {
        const bool branch_taken_0x20fb54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB54u;
        // 0x20fb58: 0x8ea291f0  lw          $v0, -0x6E10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294939120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb54) {
            ctx->pc = 0x20FC04u;
            goto label_20fc04;
        }
    }
    ctx->pc = 0x20FB5Cu;
label_20fb5c:
    // 0x20fb5c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_20fb60:
    if (ctx->pc == 0x20FB60u) {
        ctx->pc = 0x20FB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB5Cu;
        // 0x20fb60: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB64u;
        goto label_20fb64;
    }
    ctx->pc = 0x20FB5Cu;
    {
        const bool branch_taken_0x20fb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB5Cu;
        // 0x20fb60: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb5c) {
            ctx->pc = 0x20FC04u;
            goto label_20fc04;
        }
    }
    ctx->pc = 0x20FB64u;
label_20fb64:
    // 0x20fb64: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x20fb64u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
label_20fb68:
    // 0x20fb68: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x20fb68u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20fb6c:
    // 0x20fb6c: 0x8ee391ec  lw          $v1, -0x6E14($s7)
    ctx->pc = 0x20fb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294939116)));
label_20fb70:
    // 0x20fb70: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x20fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_20fb74:
    // 0x20fb74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20fb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20fb78:
    // 0x20fb78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20fb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20fb7c:
    // 0x20fb7c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x20fb7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20fb80:
    // 0x20fb80: 0xc083c52  jal         func_20F148
label_20fb84:
    if (ctx->pc == 0x20FB84u) {
        ctx->pc = 0x20FB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB80u;
        // 0x20fb84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB88u;
        goto label_20fb88;
    }
    ctx->pc = 0x20FB80u;
    SET_GPR_U32(ctx, 31, 0x20FB88u);
    ctx->pc = 0x20FB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FB80u;
    // 0x20fb84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F148u, 0x20FB80u, 0x20FB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FB88u;
label_20fb88:
    // 0x20fb88: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x20fb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_20fb8c:
    // 0x20fb8c: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x20fb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
label_20fb90:
    // 0x20fb90: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_20fb94:
    if (ctx->pc == 0x20FB94u) {
        ctx->pc = 0x20FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB90u;
        // 0x20fb94: 0x8ea291f0  lw          $v0, -0x6E10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294939120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB98u;
        goto label_20fb98;
    }
    ctx->pc = 0x20FB90u;
    {
        const bool branch_taken_0x20fb90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB90u;
        // 0x20fb94: 0x8ea291f0  lw          $v0, -0x6E10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294939120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb90) {
            ctx->pc = 0x20FBF4u;
            goto label_20fbf4;
        }
    }
    ctx->pc = 0x20FB98u;
label_20fb98:
    // 0x20fb98: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x20fb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_20fb9c:
    // 0x20fb9c: 0x38440008  xori        $a0, $v0, 0x8
    ctx->pc = 0x20fb9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_20fba0:
    // 0x20fba0: 0x5480000b  bnel        $a0, $zero, . + 4 + (0xB << 2)
label_20fba4:
    if (ctx->pc == 0x20FBA4u) {
        ctx->pc = 0x20FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBA0u;
        // 0x20fba4: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FBA8u;
        goto label_20fba8;
    }
    ctx->pc = 0x20FBA0u;
    {
        const bool branch_taken_0x20fba0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fba0) {
            ctx->pc = 0x20FBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20FBA0u;
            // 0x20fba4: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20FBD0u;
            goto label_20fbd0;
        }
    }
    ctx->pc = 0x20FBA8u;
label_20fba8:
    // 0x20fba8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x20fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_20fbac:
    // 0x20fbac: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x20fbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_20fbb0:
    // 0x20fbb0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_20fbb4:
    if (ctx->pc == 0x20FBB4u) {
        ctx->pc = 0x20FBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBB0u;
        // 0x20fbb4: 0x4100b  movn        $v0, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FBB8u;
        goto label_20fbb8;
    }
    ctx->pc = 0x20FBB0u;
    {
        const bool branch_taken_0x20fbb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBB0u;
        // 0x20fbb4: 0x4100b  movn        $v0, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fbb0) {
            ctx->pc = 0x20FBCCu;
            goto label_20fbcc;
        }
    }
    ctx->pc = 0x20FBB8u;
label_20fbb8:
    // 0x20fbb8: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x20fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_20fbbc:
    // 0x20fbbc: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x20fbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_20fbc0:
    // 0x20fbc0: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x20fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_20fbc4:
    // 0x20fbc4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_20fbc8:
    if (ctx->pc == 0x20FBC8u) {
        ctx->pc = 0x20FBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBC4u;
        // 0x20fbc8: 0xae16003c  sw          $s6, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FBCCu;
        goto label_20fbcc;
    }
    ctx->pc = 0x20FBC4u;
    {
        const bool branch_taken_0x20fbc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fbc4) {
            ctx->pc = 0x20FBC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20FBC4u;
            // 0x20fbc8: 0xae16003c  sw          $s6, 0x3C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20FBCCu;
            goto label_20fbcc;
        }
    }
    ctx->pc = 0x20FBCCu;
label_20fbcc:
    // 0x20fbcc: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x20fbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_20fbd0:
    // 0x20fbd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_20fbd4:
    if (ctx->pc == 0x20FBD4u) {
        ctx->pc = 0x20FBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBD0u;
        // 0x20fbd4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FBD8u;
        goto label_20fbd8;
    }
    ctx->pc = 0x20FBD0u;
    {
        const bool branch_taken_0x20fbd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBD0u;
        // 0x20fbd4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fbd0) {
            ctx->pc = 0x20FBE4u;
            goto label_20fbe4;
        }
    }
    ctx->pc = 0x20FBD8u;
label_20fbd8:
    // 0x20fbd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20fbdc:
    // 0x20fbdc: 0x10000004  b           . + 4 + (0x4 << 2)
label_20fbe0:
    if (ctx->pc == 0x20FBE0u) {
        ctx->pc = 0x20FBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBDCu;
        // 0x20fbe0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FBE4u;
        goto label_20fbe4;
    }
    ctx->pc = 0x20FBDCu;
    {
        const bool branch_taken_0x20fbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBDCu;
        // 0x20fbe0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fbdc) {
            ctx->pc = 0x20FBF0u;
            goto label_20fbf0;
        }
    }
    ctx->pc = 0x20FBE4u;
label_20fbe4:
    // 0x20fbe4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x20fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_20fbe8:
    // 0x20fbe8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20fbec:
    // 0x20fbec: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x20fbecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_20fbf0:
    // 0x20fbf0: 0x8ea291f0  lw          $v0, -0x6E10($s5)
    ctx->pc = 0x20fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294939120)));
label_20fbf4:
    // 0x20fbf4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20fbf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_20fbf8:
    // 0x20fbf8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x20fbf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20fbfc:
    // 0x20fbfc: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_20fc00:
    if (ctx->pc == 0x20FC00u) {
        ctx->pc = 0x20FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBFCu;
        // 0x20fc00: 0x8ee391ec  lw          $v1, -0x6E14($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294939116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FC04u;
        goto label_20fc04;
    }
    ctx->pc = 0x20FBFCu;
    {
        const bool branch_taken_0x20fbfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBFCu;
        // 0x20fc00: 0x8ee391ec  lw          $v1, -0x6E14($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294939116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fbfc) {
            ctx->pc = 0x20FB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fb70;
        }
    }
    ctx->pc = 0x20FC04u;
label_20fc04:
    // 0x20fc04: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20fc04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20fc08:
    // 0x20fc08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20fc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20fc0c:
    // 0x20fc0c: 0xc083c9e  jal         func_20F278
label_20fc10:
    if (ctx->pc == 0x20FC10u) {
        ctx->pc = 0x20FC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC0Cu;
        // 0x20fc10: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FC14u;
        goto label_20fc14;
    }
    ctx->pc = 0x20FC0Cu;
    SET_GPR_U32(ctx, 31, 0x20FC14u);
    ctx->pc = 0x20FC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FC0Cu;
    // 0x20fc10: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F278u, 0x20FC0Cu, 0x20FC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FC14u;
label_20fc14:
    // 0x20fc14: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20fc14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20fc18:
    // 0x20fc18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20fc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20fc1c:
    // 0x20fc1c: 0xc083da0  jal         func_20F680
label_20fc20:
    if (ctx->pc == 0x20FC20u) {
        ctx->pc = 0x20FC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC1Cu;
        // 0x20fc20: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FC24u;
        goto label_20fc24;
    }
    ctx->pc = 0x20FC1Cu;
    SET_GPR_U32(ctx, 31, 0x20FC24u);
    ctx->pc = 0x20FC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FC1Cu;
    // 0x20fc20: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F680u, 0x20FC1Cu, 0x20FC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FC24u;
label_20fc24:
    // 0x20fc24: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x20fc24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20fc28:
    // 0x20fc28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20fc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20fc2c:
    // 0x20fc2c: 0xc083df6  jal         func_20F7D8
label_20fc30:
    if (ctx->pc == 0x20FC30u) {
        ctx->pc = 0x20FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC2Cu;
        // 0x20fc30: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FC34u;
        goto label_20fc34;
    }
    ctx->pc = 0x20FC2Cu;
    SET_GPR_U32(ctx, 31, 0x20FC34u);
    ctx->pc = 0x20FC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FC2Cu;
    // 0x20fc30: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F7D8u, 0x20FC2Cu, 0x20FC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FC34u;
label_20fc34:
    // 0x20fc34: 0x92420114  lbu         $v0, 0x114($s2)
    ctx->pc = 0x20fc34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 276)));
label_20fc38:
    // 0x20fc38: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_20fc3c:
    if (ctx->pc == 0x20FC3Cu) {
        ctx->pc = 0x20FC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC38u;
        // 0x20fc3c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FC40u;
        goto label_20fc40;
    }
    ctx->pc = 0x20FC38u;
    {
        const bool branch_taken_0x20fc38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC38u;
        // 0x20fc3c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc38) {
            ctx->pc = 0x20FCD4u;
            goto label_20fcd4;
        }
    }
    ctx->pc = 0x20FC40u;
label_20fc40:
    // 0x20fc40: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x20fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_20fc44:
    // 0x20fc44: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x20fc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_20fc48:
    // 0x20fc48: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_20fc4c:
    if (ctx->pc == 0x20FC4Cu) {
        ctx->pc = 0x20FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC48u;
        // 0x20fc4c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FC50u;
        goto label_20fc50;
    }
    ctx->pc = 0x20FC48u;
    {
        const bool branch_taken_0x20fc48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC48u;
        // 0x20fc4c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc48) {
            ctx->pc = 0x20FCD4u;
            goto label_20fcd4;
        }
    }
    ctx->pc = 0x20FC50u;
label_20fc50:
    // 0x20fc50: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x20fc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_20fc54:
    // 0x20fc54: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x20fc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20fc58:
    // 0x20fc58: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x20fc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_20fc5c:
    // 0x20fc5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20fc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20fc60:
    // 0x20fc60: 0x1065001c  beq         $v1, $a1, . + 4 + (0x1C << 2)
label_20fc64:
    if (ctx->pc == 0x20FC64u) {
        ctx->pc = 0x20FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC60u;
        // 0x20fc64: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FC68u;
        goto label_20fc68;
    }
    ctx->pc = 0x20FC60u;
    {
        const bool branch_taken_0x20fc60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x20FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC60u;
        // 0x20fc64: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc60) {
            ctx->pc = 0x20FCD4u;
            goto label_20fcd4;
        }
    }
    ctx->pc = 0x20FC68u;
label_20fc68:
    // 0x20fc68: 0x1280001a  beqz        $s4, . + 4 + (0x1A << 2)
label_20fc6c:
    if (ctx->pc == 0x20FC6Cu) {
        ctx->pc = 0x20FC70u;
        goto label_20fc70;
    }
    ctx->pc = 0x20FC68u;
    {
        const bool branch_taken_0x20fc68 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x20fc68) {
            ctx->pc = 0x20FCD4u;
            goto label_20fcd4;
        }
    }
    ctx->pc = 0x20FC70u;
label_20fc70:
    // 0x20fc70: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20fc70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20fc74:
    // 0x20fc74: 0x10000011  b           . + 4 + (0x11 << 2)
label_20fc78:
    if (ctx->pc == 0x20FC78u) {
        ctx->pc = 0x20FC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC74u;
        // 0x20fc78: 0x3c130040  lui         $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FC7Cu;
        goto label_20fc7c;
    }
    ctx->pc = 0x20FC74u;
    {
        const bool branch_taken_0x20fc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC74u;
        // 0x20fc78: 0x3c130040  lui         $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc74) {
            ctx->pc = 0x20FCBCu;
            goto label_20fcbc;
        }
    }
    ctx->pc = 0x20FC7Cu;
label_20fc7c:
    // 0x20fc7c: 0x0  nop
    ctx->pc = 0x20fc7cu;
    // NOP
label_20fc80:
    // 0x20fc80: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x20fc80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_20fc84:
    // 0x20fc84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20fc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20fc88:
    // 0x20fc88: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x20fc88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20fc8c:
    // 0x20fc8c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x20fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_20fc90:
    // 0x20fc90: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_20fc94:
    if (ctx->pc == 0x20FC94u) {
        ctx->pc = 0x20FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC90u;
        // 0x20fc94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FC98u;
        goto label_20fc98;
    }
    ctx->pc = 0x20FC90u;
    {
        const bool branch_taken_0x20fc90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC90u;
        // 0x20fc94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc90) {
            ctx->pc = 0x20FCB8u;
            goto label_20fcb8;
        }
    }
    ctx->pc = 0x20FC98u;
label_20fc98:
    // 0x20fc98: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x20fc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_20fc9c:
    // 0x20fc9c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x20fc9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_20fca0:
    // 0x20fca0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20fca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20fca4:
    // 0x20fca4: 0x24a60010  addiu       $a2, $a1, 0x10
    ctx->pc = 0x20fca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_20fca8:
    // 0x20fca8: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x20fca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_20fcac:
    // 0x20fcac: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x20fcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_20fcb0:
    // 0x20fcb0: 0x40f809  jalr        $v0
label_20fcb4:
    if (ctx->pc == 0x20FCB4u) {
        ctx->pc = 0x20FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FCB0u;
        // 0x20fcb4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FCB8u;
        goto label_20fcb8;
    }
    ctx->pc = 0x20FCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20FCB8u);
        ctx->pc = 0x20FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FCB0u;
        // 0x20fcb4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FCB0u, 0x20FCB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20FCB8u;
label_20fcb8:
    // 0x20fcb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20fcb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_20fcbc:
    // 0x20fcbc: 0xc0796ac  jal         func_1E5AB0
label_20fcc0:
    if (ctx->pc == 0x20FCC0u) {
        ctx->pc = 0x20FCC4u;
        goto label_20fcc4;
    }
    ctx->pc = 0x20FCBCu;
    SET_GPR_U32(ctx, 31, 0x20FCC4u);
    ctx->pc = 0x1E5AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5AB0u, 0x20FCBCu, 0x20FCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FCC4u;
label_20fcc4:
    // 0x20fcc4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x20fcc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20fcc8:
    // 0x20fcc8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_20fccc:
    if (ctx->pc == 0x20FCCCu) {
        ctx->pc = 0x20FCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FCC8u;
        // 0x20fccc: 0x8e6291dc  lw          $v0, -0x6E24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294939100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FCD0u;
        goto label_20fcd0;
    }
    ctx->pc = 0x20FCC8u;
    {
        const bool branch_taken_0x20fcc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FCC8u;
        // 0x20fccc: 0x8e6291dc  lw          $v0, -0x6E24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294939100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fcc8) {
            ctx->pc = 0x20FC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fc80;
        }
    }
    ctx->pc = 0x20FCD0u;
label_20fcd0:
    // 0x20fcd0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x20fcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20fcd4:
    // 0x20fcd4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_20fcd8:
    if (ctx->pc == 0x20FCD8u) {
        ctx->pc = 0x20FCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FCD4u;
        // 0x20fcd8: 0x8e44010c  lw          $a0, 0x10C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FCDCu;
        goto label_20fcdc;
    }
    ctx->pc = 0x20FCD4u;
    {
        const bool branch_taken_0x20fcd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FCD4u;
        // 0x20fcd8: 0x8e44010c  lw          $a0, 0x10C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fcd4) {
            ctx->pc = 0x20FCE8u;
            goto label_20fce8;
        }
    }
    ctx->pc = 0x20FCDCu;
label_20fcdc:
    // 0x20fcdc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x20fcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_20fce0:
    // 0x20fce0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_20fce4:
    if (ctx->pc == 0x20FCE4u) {
        ctx->pc = 0x20FCE8u;
        goto label_20fce8;
    }
    ctx->pc = 0x20FCE0u;
    {
        const bool branch_taken_0x20fce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20fce0) {
            ctx->pc = 0x20FD14u;
            goto label_20fd14;
        }
    }
    ctx->pc = 0x20FCE8u;
label_20fce8:
    // 0x20fce8: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x20fce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_20fcec:
    // 0x20fcec: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x20fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_20fcf0:
    // 0x20fcf0: 0x40f809  jalr        $v0
label_20fcf4:
    if (ctx->pc == 0x20FCF4u) {
        ctx->pc = 0x20FCF8u;
        goto label_20fcf8;
    }
    ctx->pc = 0x20FCF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20FCF8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FCF0u, 0x20FCF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20FCF8u;
label_20fcf8:
    // 0x20fcf8: 0xc076e00  jal         func_1DB800
label_20fcfc:
    if (ctx->pc == 0x20FCFCu) {
        ctx->pc = 0x20FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FCF8u;
        // 0x20fcfc: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FD00u;
        goto label_20fd00;
    }
    ctx->pc = 0x20FCF8u;
    SET_GPR_U32(ctx, 31, 0x20FD00u);
    ctx->pc = 0x20FCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FCF8u;
    // 0x20fcfc: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB800u, 0x20FCF8u, 0x20FD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FD00u;
label_20fd00:
    // 0x20fd00: 0xc083f5e  jal         func_20FD78
label_20fd04:
    if (ctx->pc == 0x20FD04u) {
        ctx->pc = 0x20FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD00u;
        // 0x20fd04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FD08u;
        goto label_20fd08;
    }
    ctx->pc = 0x20FD00u;
    SET_GPR_U32(ctx, 31, 0x20FD08u);
    ctx->pc = 0x20FD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FD00u;
    // 0x20fd04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FD78u, 0x20FD00u, 0x20FD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FD08u;
label_20fd08:
    // 0x20fd08: 0x1000000f  b           . + 4 + (0xF << 2)
label_20fd0c:
    if (ctx->pc == 0x20FD0Cu) {
        ctx->pc = 0x20FD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD08u;
        // 0x20fd0c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FD10u;
        goto label_20fd10;
    }
    ctx->pc = 0x20FD08u;
    {
        const bool branch_taken_0x20fd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD08u;
        // 0x20fd0c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd08) {
            ctx->pc = 0x20FD48u;
            goto label_20fd48;
        }
    }
    ctx->pc = 0x20FD10u;
label_20fd10:
    // 0x20fd10: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x20fd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_20fd14:
    // 0x20fd14: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x20fd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_20fd18:
    // 0x20fd18: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x20fd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_20fd1c:
    // 0x20fd1c: 0x40f809  jalr        $v0
label_20fd20:
    if (ctx->pc == 0x20FD20u) {
        ctx->pc = 0x20FD24u;
        goto label_20fd24;
    }
    ctx->pc = 0x20FD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20FD24u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FD1Cu, 0x20FD24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20FD24u;
label_20fd24:
    // 0x20fd24: 0xc076de4  jal         func_1DB790
label_20fd28:
    if (ctx->pc == 0x20FD28u) {
        ctx->pc = 0x20FD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD24u;
        // 0x20fd28: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FD2Cu;
        goto label_20fd2c;
    }
    ctx->pc = 0x20FD24u;
    SET_GPR_U32(ctx, 31, 0x20FD2Cu);
    ctx->pc = 0x20FD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FD24u;
    // 0x20fd28: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB790u, 0x20FD24u, 0x20FD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FD2Cu;
label_20fd2c:
    // 0x20fd2c: 0x8e4300c0  lw          $v1, 0xC0($s2)
    ctx->pc = 0x20fd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_20fd30:
    // 0x20fd30: 0x2404efff  addiu       $a0, $zero, -0x1001
    ctx->pc = 0x20fd30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_20fd34:
    // 0x20fd34: 0xa2400115  sb          $zero, 0x115($s2)
    ctx->pc = 0x20fd34u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 277), (uint8_t)GPR_U32(ctx, 0));
label_20fd38:
    // 0x20fd38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20fd3c:
    // 0x20fd3c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x20fd3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_20fd40:
    // 0x20fd40: 0xae4300c0  sw          $v1, 0xC0($s2)
    ctx->pc = 0x20fd40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 3));
label_20fd44:
    // 0x20fd44: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20fd44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20fd48:
    // 0x20fd48: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20fd48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_20fd4c:
    // 0x20fd4c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20fd4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20fd50:
    // 0x20fd50: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x20fd50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_20fd54:
    // 0x20fd54: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x20fd54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_20fd58:
    // 0x20fd58: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x20fd58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_20fd5c:
    // 0x20fd5c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x20fd5cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_20fd60:
    // 0x20fd60: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x20fd60u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_20fd64:
    // 0x20fd64: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x20fd64u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_20fd68:
    // 0x20fd68: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x20fd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_20fd6c:
    // 0x20fd6c: 0x3e00008  jr          $ra
label_20fd70:
    if (ctx->pc == 0x20FD70u) {
        ctx->pc = 0x20FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD6Cu;
        // 0x20fd70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FD74u;
        goto label_20fd74;
    }
    ctx->pc = 0x20FD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD6Cu;
        // 0x20fd70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FD6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FD74u;
label_20fd74:
    // 0x20fd74: 0x0  nop
    ctx->pc = 0x20fd74u;
    // NOP
    ctx->pc = 0x20fd78u;
}
